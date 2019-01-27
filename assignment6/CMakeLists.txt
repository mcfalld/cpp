cmake_minimum_required(VERSION 3.7)
project(assignment6)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp ../trim account.h cmake-build-debug/account.h)
add_executable(assignment6 ${SOURCE_FILES} ../trim)
find_library(TRIM_LIBRARY NAMES trim PATHS ../trim/cmake-build-debug/libtrim.a)
