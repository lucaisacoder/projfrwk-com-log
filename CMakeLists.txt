# cmake version
cmake_minimum_required (VERSION 3.5)

# sdk path
if(NOT SDK_PATH)
    get_filename_component(SDK_PATH ../../ ABSOLUTE)
    if(EXISTS $ENV{MY_SDK_PATH})
        set(SDK_PATH $ENV{MY_SDK_PATH})
    endif()
endif()

if(NOT EXISTS ${SDK_PATH})
    message(FATAL_ERROR "SDK path Error, Please set SDK_PATH or MY_SDK_PATH variable")
endif()

# toolchain
if(NOT CONFIG_TOOLCHAIN_PATH)
    if(EXISTS $ENV{MY_TOOLCHAIN_PATH})
        set(CONFIG_TOOLCHAIN_PATH $ENV{MY_TOOLCHAIN_PATH})
    endif()
endif()

# preprocessor definitions for whole project
add_definitions(-DOSAL_DEFINE=1)

# 设置cmake工具路径
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${SDK_PATH}/tools/cmake/find)

find_package(OSAL REQUIRED)
if(OSAL_FOUND)
    include_directories(${OSAL_INCLUDE_DIRS})
else()
    message("not found OSAL")
endif()

# project name
include(${SDK_PATH}/tools/cmake/util/project.cmake)
project(log)