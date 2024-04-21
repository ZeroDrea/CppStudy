cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
project(CppStudy)

aux_source_directory(. SRC_LIST)
include_directories(./include)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../lib)
#add_library(calc SHARED ${SRC_LIST})
add_library(calc STATIC ${SRC_LIST})