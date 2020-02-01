#include <stdio.h>
#include "log.h"

int log_api()
{
	printf("COM: log, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, COM_LOG_VERSION);
	return 0;
}
