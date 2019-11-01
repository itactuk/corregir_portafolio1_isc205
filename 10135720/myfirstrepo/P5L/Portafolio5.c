//
// Created by admin on 17/10/2019.
//

#include "Portafolio5.h"

void llenararreglo(int cant) {

    int i, arreglo[cant];

    for ( i = 0; i < cant; i++) {
        printf("Digite su numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    inverso_arreglo( arreglo, cant);

    for (int j = 0; j < cant; ++j) {
        printf("\n %d", arreglo[j]);
    }


}


    void inverso_arreglo(int arr[], int c) {

        int indinicial,indfinal, reves;

        indinicial = 0;
        indfinal= c -1;

        if (indinicial < indfinal) {

            reves = arr[indinicial];
            arr[indinicial] = arr[indfinal];
            arr[indfinal] = reves;
            indfinal-=1;
            indinicial +=1;

            inverso_arreglo(arr, c - 1);
        }
    }


