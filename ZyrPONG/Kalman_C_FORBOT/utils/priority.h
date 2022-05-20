#ifndef PRIORITY_H
#define PRIORITY_H

/** @name Parametry tasku diagnostycznego @{ */
#define DIAG_STACKSIZE                 (configMINIMAL_STACK_SIZE)
#define DIAG_PRIORITY                  (tskIDLE_PRIORITY + 4)
/** @} */

/** @name Parametry tasku czujnika @{ */
#define SENSOR_STACKSIZE                 (configMINIMAL_STACK_SIZE)
#define SENSOR_PRIORITY                  (tskIDLE_PRIORITY + 3)
/** @} */

/** @name Parametry tasku filtra @{ */
#define FILTER_STACKSIZE                 (configMINIMAL_STACK_SIZE * 4)
#define FILTER_PRIORITY                  (tskIDLE_PRIORITY + 2)
/** @} */

/** @name Parametry tasku loggera @{ */
#define LOGGER_STACKSIZE                 (configMINIMAL_STACK_SIZE)
#define LOGGER_PRIORITY                  (tskIDLE_PRIORITY + 1)
/** @} */

#endif /* PRIORITY_H */
