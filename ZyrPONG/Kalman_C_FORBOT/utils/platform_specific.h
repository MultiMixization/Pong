#ifndef PLATFORM_SPECIFIC_H_
#define PLATFORM_SPECIFIC_H_

#include "stm32f4xx.h"
#include "stdbool.h"
#include "priority.h"

#include "FreeRTOSConfig.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "rtos_timers.h"
#include "semphr.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

/** @note Definicje dotyczace predkosci taktowania. @{ */
#define HSE_FREQ              8000000
#define MCU_CLOCK_FREQ        168000000UL
#define AHB_CLOCK_FREQ        MCU_CLOCK_FREQ
#define APB2_CLOCK_FREQ       MCU_CLOCK_FREQ/2
#define APB1_CLOCK_FREQ       MCU_CLOCK_FREQ/4
/** @} */

/**
 * @name Makra do funkcji RTOS ulatwiajace portowanie.
 * @{
 */
#define rtos_task_create(ptr, name, stack, prio)                               \
   xTaskCreate(ptr, (const signed char*)name, stack, NULL, prio, NULL)

#define rtos_delay(ms)                                                         \
   vTaskDelay(ms/portTICK_RATE_MS)

#define rtos_delay_until(ticks, ms)                                            \
   vTaskDelayUntil(&ticks, ms/portTICK_RATE_MS)

#define rtos_queue_create(len, item_size)                                      \
   xQueueCreate(len, item_size)

#define rtos_queue_send(queue_ptr, data_ptr, ms)                               \
   xQueueSend(queue_ptr, (void *)data_ptr, ms/portTICK_RATE_MS)

#define rtos_queue_receive(queue_ptr, data_ptr, ms)                            \
   xQueueReceive(queue_ptr, (void *)data_ptr, ms/portTICK_RATE_MS)

#define rtos_sem_bin_create(sem_ptr)                                           \
   vSemaphoreCreateBinary(sem_ptr)

#define rtos_sem_take(sem_ptr, ms)                                             \
   xSemaphoreTake(sem_ptr, ms/portTICK_RATE_MS)

#define rtos_sem_give(sem_ptr)                                                 \
   xSemaphoreGive(sem_ptr)

#define rtos_sem_take_isr(sem_ptr, yield)                                      \
   xSemaphoreTakeFromISR(sem_ptr, yield)

#define rtos_sem_give_isr(sem_ptr, yield)                                      \
   xSemaphoreGiveFromISR(sem_ptr, yield)

#define rtos_priority_set(task, prio)                                          \
   vTaskPrioritySet(task, prio)

#define rtos_get_tick_count()                                                  \
   xTaskGetTickCount()
/** @} */


#endif /* PLATFORM_SPECIFIC_H_ */
