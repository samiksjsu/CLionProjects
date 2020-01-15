cmake_minimum_required(VERSION 3.14)
project(sortingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(sortingAlgorithms main.cpp sourceFiles/ sourceFiles/radixSort.cpp sourceFiles/Node.cpp
        sourceFiles/mergeSort.cpp sourceFiles/countSort.cpp)
include_directories(headerFiles)
include_directories(sourceFiles)
