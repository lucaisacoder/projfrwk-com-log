########### set component include ###########
set(COM_INCLUDE         inc)
set(COM_PUBLIC_INCLUDE  inc_pub)
###############################################

###########   set source files    ###########
set(COM_SRCS  
        src/log_api.c
    )
###############################################

########## set required components ##########
#if(CONFIG_OSAL_ENABLED)
#    list(APPEND ADD_REQUIREMENTS OSAL)
#else()
#    list(APPEND ADD_REQUIREMENTS )
#endif()
###############################################

############ set static libs ##################
# list(APPEND COM_STATIC_LIB "lib/libcode.a")
###############################################

############ set definitions ##################
# list(APPEND COM_DEFINITIONS_PRIVATE -DAAAAA=1)
# list(APPEND COM_DEFINITIONS -DAAAAA222=1
#                             -DAAAAA333=1)
###############################################

include(${SDK_PATH}/components/log/cmake/project.cmake)
project(log)