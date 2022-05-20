#include "i2c_master.h"

#include "define/hdr_i2c.h"
#include "gpio_f4/gpio_f4.h"

#define I2C_READ           1
#define I2C_WRITE          0

void i2c_master_init(void)
{
   RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;

   /* PB6 - SCL PB7 - SDA */
   gpio_mode_config(GPIOB, 6, GPIO_MODE_AF);
   gpio_mode_config(GPIOB, 7, GPIO_MODE_AF);

   gpio_af_config(GPIOB, 6, GPIO_AF_I2C1);
   gpio_af_config(GPIOB, 7, GPIO_AF_I2C1);

   RCC->APB1ENR |= RCC_APB1ENR_I2C1EN;

   I2C1->CR2 = 42;

   /*
    * T_APB1 = 24ns
    * 400kHz - 2500ns
    * 2500ns = 3 * CCR * T_APB1
    * CCR = 35
    */
   I2C1->CCR = I2C_CCR_FS | I2C_CCR_DUTY | 35;

   /*
    * Max SCL rise time = 250ns
    * T_APB1 = 24ns
    * (MAX_SCL / T_APB1) + 1 = 11
    */
   I2C1->TRISE = 11;

   I2C1->CR1 = I2C_CR1_PE;
}

int32_t i2c_master_read_reg(int32_t slave_addr, int32_t reg_addr)
{
   __attribute__((unused)) int32_t dummy;
   int32_t retval;

   /* Wyslanie sygnalu startu */
   I2C1_CR1_START_bb = 1;
   while (I2C1_SR1_SB_bb == 0)
      ;
   dummy = I2C1->SR1;

   /* Ustawienie adresu slave i aktywacja trybu transmitera */
   I2C1->DR = (slave_addr << 1) | I2C_WRITE;
   while (I2C1_SR1_ADDR_bb == 0)
      ;
   dummy = I2C1->SR1;
   dummy = I2C1->SR2;

   /* Ustawienie adresu rejestru do odczytania */
   while (I2C1_SR1_TxE_bb == 0)
      ;
   I2C1->DR = reg_addr;
   while (I2C1_SR1_BTF_bb == 0)
      ;

   /* Wyslanie ponownego sygnalu startu */
   I2C1_CR1_START_bb = 1;
   while (I2C1_SR1_SB_bb == 0)
      ;
   dummy = I2C1->SR1;

   /* Ustawienie adresu slave i aktywacja trybu receivera */
   I2C1->DR = (slave_addr << 1) | I2C_READ;
   while (I2C1_SR1_ADDR_bb == 0)
      ;
   dummy = I2C1->SR1;
   dummy = I2C1->SR2;

   /* Odczyt jednego bajtu danych */
   I2C1_CR1_ACK_bb = 0;
   while (I2C1_SR1_RxNE_bb == 0)
      ;
   retval = I2C1->DR;

   /* Wyslanie sygnalu stopu */
   I2C1_CR1_STOP_bb = 1;

   return retval;
}

void i2c_master_write_reg(int32_t slave_addr, int32_t reg_addr, int32_t val)
{
   __attribute__((unused)) int32_t dummy;

   /* Wyslanie sygnalu startu */
   I2C1_CR1_START_bb = 1;
   while (I2C1_SR1_SB_bb == 0)
      ;
   dummy = I2C1->SR1;

   /* Ustawienie adresu slave i aktywacja trybu transmitera */
   I2C1->DR = (slave_addr << 1) | I2C_WRITE;
   while (I2C1_SR1_ADDR_bb == 0)
      ;
   dummy = I2C1->SR1;
   dummy = I2C1->SR2;

   /* Ustawienie adresu rejestru do zapisania */
   while (I2C1_SR1_TxE_bb == 0)
      ;
   I2C1->DR = reg_addr;

   /* Ustawienie wartosci do zapisania */
   while (I2C1_SR1_TxE_bb == 0)
      ;
   I2C1->DR = val;
   while (I2C1_SR1_BTF_bb == 0)
      ;

   /* Wyslanie sygnalu stopu */
   I2C1_CR1_STOP_bb = 1;
}
