cmake_minimum_required(VERSION 3.14)
project(MergeSort C)

set(CMAKE_C_STANDARD 99)

add_executable(MergeSort main.c MergeSort.c MergeSort.h minunit.h)