// 7.	Programar un algoritmo recursivo que permita sumar los elementos de una matriz de enteros.

#include "portafolio7.h"


    int main(){
    
        int elementos, matriz [4][4] = {{5,10,15,20},{20,15,10,5},{15,20,5,10}};
        elementos = 4;

        printf("\nLa suma de la matriz es: %d\n",  sumar_matriz(matriz, elementos, elementos,elementos));
    }
