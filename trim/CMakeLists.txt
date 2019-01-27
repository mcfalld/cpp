cmake_minimum_required(VERSION 3.7)
project(trim)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES trim.cpp trim.h)
add_library(trim ${SOURCE_FILES})