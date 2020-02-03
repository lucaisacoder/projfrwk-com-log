#include <stdio.h>
#include "log.h"
#include "local_kconfig.h"
#include "global_kconfig.h"

int log_api()
{
	printf("COM: log, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, COM_LOG_VERSION);
#ifdef COM_LOG_DEFINITION
	printf("KCONFIG: enable\n");
#endif
	return 0;
}
