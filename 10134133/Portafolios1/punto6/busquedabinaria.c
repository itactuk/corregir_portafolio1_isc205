//
// Created by sebastian on 10/17/2019.
//

#include <stdio.h>
#include <math.h> // Para floor

int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha); //funcion de la busqueda binaria recursivamente
int busquedaBinariaConWhile(int arreglo[], int busqueda, int tamanioDelArreglo);

int main(){
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8,9, 10};
    int busqueda = 4;
    int longitudDelArreglo = sizeof(numeros) / sizeof(numeros[0]);
    int resultadoBusquedaRecursiva = busquedaBinariaRecursiva(numeros, busqueda, 0, longitudDelArreglo - 1);
    printf("Busqueda Binaria Recursiva!\n");
    printf("Al buscar %d recursivamente, el resultado es %d\n", busqueda, resultadoBusquedaRecursiva);

}

int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha)
        return -1;

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);

    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio){
        return indiceDeLaMitad;
    }

    if (busqueda < valorQueEstaEnElMedio){

        derecha = indiceDeLaMitad - 1;
    }else{

        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}


