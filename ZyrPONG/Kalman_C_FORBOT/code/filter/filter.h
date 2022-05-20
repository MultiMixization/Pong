#ifndef FILTER_H_
#define FILTER_H_

#include "platform_specific.h"

/**
 * @brief Inicjalizacja tasku filtru alfa-beta.
 *
 * Task filtru alfa-beta co 100ms wykonuje obliczenia filtru.
 */
void filter_task_init(void);

float filter_get_est(void);

#endif /* FILTER_H_ */
