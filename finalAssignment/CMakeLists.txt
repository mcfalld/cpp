cmake_minimum_required(VERSION 3.8)
project(finalAssignment)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp account.h simple_account.h bonus_account.h service_account.h balanced_account.h manager.h factory.h)
add_executable(finalAssignment ${SOURCE_FILES})