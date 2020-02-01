# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
project(log)
include(${CMAKE_SOURCE_DIR}/../../tools/cmake/print.cmake)

get_filename_component(SDK_SOURCE_DIR ${CMAKE_SOURCE_DIR}/../../ ABSOLUTE)
print(INFO ${SDK_SOURCE_DIR})

include_directories(code/inc code/inc_pub)
aux_source_directory(code/src DIR_SRCS)
add_library(log STATIC ${DIR_SRCS})

