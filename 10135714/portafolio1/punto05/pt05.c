//
// Created by hola on 01/11/2019.
//

#include "pt05.h"

void llenar( int tam) {

    int ctd= tam - 1;
    int arreglo[tam];


    printf("Digite los numeros dentro del arreglo que desea:\n");
    for ( int i = 0; i < tam ; i++) {
        scanf("%d", &arreglo[i]);
    }

    printf("Tu arreglo es: ");
    for ( int i = 0; i < tam ; i++) {
        printf("%d ", arreglo[i]);
    }

    printf("\nTu arreglo inverso es: ");
    inverso(arreglo,ctd);


}

int inverso(int arreglo[],int ctd){


    if (ctd == 0)
    {
        return printf("%d ", arreglo[ctd]);
    }
    else
    {
        printf("%d ", arreglo[ctd]);
        inverso(arreglo,ctd - 1);
    }



}
