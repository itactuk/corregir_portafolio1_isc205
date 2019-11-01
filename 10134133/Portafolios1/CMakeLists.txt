cmake_minimum_required(VERSION 3.15)
project(untitled2 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled2 punto2/main.c)

add_executable(primonombre primo/primo.c primo/primo.h primo/primominunit.h primo/primominunit.c)
add_executable(joyanes21 punto821/joyanes21.c)
add_executable(joyanes8 "punto 8.8/joyanes8.c")
add_executable(inversadetexto punto4/inversadetexto.c)
add_executable(bubblesort punto9/bubblesort.c)
add_executable(busquedabinaria punto6/busquedabinaria.c)
add_executable(sumamatriz punto7/sumamatriz.c)
add_executable(estructura estructura/estructura.cpp)