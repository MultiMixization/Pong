#include "logger.h"

#include "sensor/sensor.h"
#include "filter/filter.h"

#include "usart/usart.h"

#define USART_BUF_SIZE           8

uint8_t usart_buf[USART_BUF_SIZE];

static void logger_task(void *);
static void data_to_buf(uint8_t *, int16_t);

void logger_task_init(void)
{
   usart_init();
   rtos_task_create(logger_task, "logger", LOGGER_STACKSIZE, LOGGER_PRIORITY);
}

/**
 * @brief Implementacja tasku loggera.
 *
 * @param params                       Parametry dla tasku - nieuzywane.
 */
static void logger_task(void * params)
{
   (void) params;

   portTickType ticks;

   rtos_delay(150);

   while (1)
   {
      ticks = rtos_get_tick_count();

      data_to_buf(usart_buf, (int16_t)sensor_acc_get_x());
      data_to_buf(usart_buf + 2, (int16_t)sensor_acc_get_y());
      data_to_buf(usart_buf + 4, (int16_t)sensor_gyro_get_z());
      data_to_buf(usart_buf + 6, (int16_t)(filter_get_est()*100));

      usart_send_buf(usart_buf, USART_BUF_SIZE);

      rtos_delay_until(ticks, 100);
   }
}

/**
 * @brief Funkcja przepisujaca 16-bitowa dana do bufora.
 *
 * @param [out]buf                     Bufor docelowy.
 * @param data                         Dana do zapisania.
 */
static void data_to_buf(uint8_t * buf, int16_t data)
{
   buf[0] = data & 0xFF;
   buf[1] = (data >> 8) & 0xFF;
}
