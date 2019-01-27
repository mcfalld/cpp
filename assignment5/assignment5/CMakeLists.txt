cmake_minimum_required(VERSION 3.7)
project(assignment5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp employee.h)
add_executable(assignment5 ${SOURCE_FILES})
add_library(trim.lib)