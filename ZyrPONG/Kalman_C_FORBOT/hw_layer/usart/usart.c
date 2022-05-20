#include "usart.h"

#include "define/hdr_usart.h"
#include "gpio_f4/gpio_f4.h"

typedef struct
{
   uint8_t * buf;
   int32_t next_to_send;
   int32_t last;
   uint8_t is_in_progress;
} usart_struct_t;

static usart_struct_t usart_struct;

void usart_init(void)
{
   RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
   gpio_mode_config(GPIOA, 2, GPIO_MODE_AF);
   gpio_af_config(GPIOA, 2, GPIO_AF_USART2);

   RCC->APB1ENR |= RCC_APB1ENR_USART2EN;

   USART2->BRR = APB1_CLOCK_FREQ / 9600;
   USART2->CR1 = USART_CR1_TE | USART_CR1_UE;
   NVIC_EnableIRQ(USART2_IRQn);

   usart_struct.next_to_send = 0;
   usart_struct.last = 0;
   usart_struct.is_in_progress = 0;
}

void usart_send_buf(uint8_t * buf, int32_t len)
{
   /* Czekamy na zakonczenie poprzedniego zapisu */
   while(usart_struct.is_in_progress != 0)
      ;

   /* Ustawiamy bufor i parametry i aktywujemy przerwanie od wysylania */
   usart_struct.buf = buf;
   usart_struct.last = len;

   /*
    * Wysylamy pierwszy bajt i wlaczamy przerwanie od wysylania.
    * Nie obslugujemy przypadku, gdy w buforze jest tylko 1 bajt do wyslania.
    */
   usart_struct.next_to_send = 0;
   usart_struct.is_in_progress = 1;
   USART2_CR1_TXEIE_bb = 1;
}

void USART2_IRQHandler(void)
{
   if (USART2_CR1_TXEIE_bb && USART2_SR_TXE_bb)
   {
      USART2->DR = usart_struct.buf[usart_struct.next_to_send++];

      if (usart_struct.next_to_send == usart_struct.last)
      {
         USART2_CR1_TXEIE_bb = 0;
         USART2_CR1_TCIE_bb = 1;
      }
   }

   if (USART2_CR1_TCIE_bb && USART2_SR_TC_bb)
   {
      USART2_CR1_TCIE_bb = 0;
      usart_struct.is_in_progress = 0;
   }
}
