cmake_minimum_required(VERSION 3.14)
project(Ejercicio__15_Programa_Largo_ C)

set(CMAKE_C_STANDARD 99)

add_executable(Ejercicio__15_Programa_Largo_ main.c Funciones.c Funciones.h)

add_executable(Ejercicio__15_Programa_Largo_minunit Funciones.c Funciones.h minunit.h minunit.c)