#include "platform_specific.h"
#include <stdlib.h>

void __malloc_lock(struct _reent *r)
{
	(void)r;	/* suppress warning */
	vPortEnterCritical();
}

void __malloc_unlock(struct _reent *r)
{
	(void)r; /* suppress warning */
	vPortExitCritical();
}
