#ifndef DIAG_H_
#define DIAG_H_

#include "platform_specific.h"

/**
 * @brief Inicjalizacja tasku diagnostycznego.
 *
 * W tasku diagnostycznym dokonywana jest inicjalizacja wszystkich pozostalych
 * taskow wykorzystywanych w systemie, a nastepnie wykonywane jest miganie
 * dioda.
 */
void diag_task_init(void);

#endif /* DIAG_H_ */
