cmake_minimum_required(VERSION 3.14)
project(SelectionSort C)

set(CMAKE_C_STANDARD 99)

add_executable(SelectionSort main.c minunit.h SelectionSort.c SelectionSort.h)