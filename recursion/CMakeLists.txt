cmake_minimum_required(VERSION 3.14)
project(recursion)

set(CMAKE_CXX_STANDARD 17)

add_executable(recursion main.cpp factorial.cpp taylorSeries.cpp fibonacci.cpp fibonacci.h factorial.h nCr.h nCr.cpp toh.cpp toh.h add.cpp add.h)