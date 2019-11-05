//
// Created by RobDom01 on 27/9/2019.
//


#include "matriz_trasp.h"
#include <stdio.h>


void Tomar_matriz(int m, int n, int matriz[m][n]){

    int i,j;

    for(i=0 ; i < m; i++){
        for(j=0; j < n; j++){
            printf("Valor Posici%cn [%d,%d] \n",162,i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
}


void Ver_matriz(int m, int n, int matriz[m][n]){

    int i,j;

    for(i=0 ; i < m; i++){
        for(j=0; j < n; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}


void Ver_traspuesta(int m, int n, int matriz[m][n]){

    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",matriz[j][i]);
        }
        printf("\n");
    }
}