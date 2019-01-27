cmake_minimum_required(VERSION 3.7)
project(assignment3)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp planet.h moons.h)
add_executable(assignment3 ${SOURCE_FILES})