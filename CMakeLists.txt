cmake_minimum_required(VERSION 3.8)
project(ex1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp osm.h osm.cpp)
add_executable(ex1 ${SOURCE_FILES})