#include "core_init/core_init.h"
#include "diag/diag.h"

int  main(void)
{
   core_init();
   diag_task_init();
   vTaskStartScheduler();

	while (1)
		;
}
