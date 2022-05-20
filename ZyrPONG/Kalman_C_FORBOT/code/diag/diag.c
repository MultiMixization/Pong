#include "diag.h"

#include "sensor/sensor.h"
#include "filter/filter.h"
#include "logger/logger.h"

#include "gpio_f4/gpio_f4.h"

static void diag_task(void *);

void diag_task_init(void)
{
   rtos_task_create(diag_task, "diag", DIAG_STACKSIZE, DIAG_PRIORITY);
}

/**
 * @brief Implementacja tasku diagnostycznego.
 *
 * @param params                       Parametry dla tasku - nieuzywane.
 */
static void diag_task(void * params)
{
   (void)params;

   /* Uruchomienie wszystkich wykorzystywanych taskow */
   sensor_task_init();
   filter_task_init();
   logger_task_init();

   /* Inicjalizacja diody do migania */
   RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
   gpio_mode_config(GPIOD, 13, GPIO_MODE_OUTPUT);

   /* Glowna petla programu - miganie dioda */
   while (1)
   {
      rtos_delay(1000);
      GPIOD->BSRRL = 1<<13;

      rtos_delay(1000);
      GPIOD->BSRRH = 1<<13;
   }
}
