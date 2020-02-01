#include <stdio.h>
#include "log_api.h"
#include "log.h"
#include "log_ut.h"

int main()
{
	printf("COM:LOG, UNIT TEST:%s, VERSION:%d, UTVER:%d\n", __FUNCTION__, COM_LOG_VERSION, COM_LOG_UT_VERSION);
	log_api();
	return 0;
}

