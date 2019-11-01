cmake_minimum_required(VERSION 3.14)
project("Ahorcado" C)

set(CMAKE_C_STANDARD 99)

add_executable("Ahorcado" "Ahorcado/main.c" "Ahorcado/1_jugador.c" "Ahorcado/2_Jugador.c" "Ahorcado/Funciones.h" "Ahorcado/Ahorcado.c")
add_executable(Ahorcadominunit "Ahorcado/1_jugador.c" "Ahorcado/2_Jugador.c" "Ahorcado/minunit.h" "Ahorcado/Funciones.h" "Ahorcado/Ahorcado.c" "Ahorcado/minunit.c")

add_executable("untitled" "untitled/main.c" "untitled/Identificador_Valido.c" "untitled/Identificador_Valido.h" "untitled/minunit.h")

