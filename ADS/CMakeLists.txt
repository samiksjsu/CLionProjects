# cmake_minimum_required(VERSION <specify CMake version here>)
project(ADS)

set(CMAKE_CXX_STANDARD 17)

add_executable(ADS main.cpp main2.cpp Account.h Account.cpp test.c)