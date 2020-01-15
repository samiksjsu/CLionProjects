cmake_minimum_required(VERSION 3.14)
project(hashing)

set(CMAKE_CXX_STANDARD 17)

add_executable(hashing main.cpp chaining.cpp chaining.h node.cpp node.h linearProbing.cpp linearProbing.h)