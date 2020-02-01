#include <stdio.h>
#include "log_ut.h"
#include "log_api.h"

int main()
{
    printf("%s: ut version %d\n", __FUNCTION__, COM_LOG_UT_VERSION);
    return log_main();
}