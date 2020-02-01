#include <stdio.h>
#include "log.h"

int log_main()
{
    printf("%s: version %d\n", __FUNCTION__, COM_LOG_VERSION);
    return 0;
}

int log_main_api()
{
    return log_main();
}