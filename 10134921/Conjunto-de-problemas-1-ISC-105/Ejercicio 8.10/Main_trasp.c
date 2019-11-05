//
// Created by RobDom01 on 27/9/2019.
//

#include <stdio.h>
#include "matriz_trasp.h"


int main(){
    int m,n;

    printf("Digite las filas: ");
    scanf("%d",&m);
    printf("\n");

    printf("Digite las columnas: ");
    scanf("%d",&n);
    printf("\n");

    int matriz[m][n];

    Tomar_matriz(m,n,matriz);

    printf("Matriz: \n\n");
    Ver_matriz(m,n,matriz);

    printf("\nMatriz traspuesta: \n\n");
    Ver_traspuesta(m,n,matriz);
    printf("\n");

    return 0;
}