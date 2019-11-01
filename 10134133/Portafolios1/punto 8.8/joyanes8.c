//
// Created by sebastian on 10/11/2019.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m, max = -1,min=1000000;
    printf("--------------------------\n");
    printf("Valor M%cximo de la Matriz!\n",160);
    printf("--------------------------\n");
    printf("Ingrese las dimensiones de la matriz:\n");
    scanf("%d %d",&n,&m);
    int matriz[n][m];
    printf("Vale! pues la matriz sera de %d FILAS y %d COLUMNAS\n",n,m);
    printf("Ingrese los valores: \n");
    for (int i=0; i < n; i++) {
        for (int j=0; j< m; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Asi se ve tu matriz %d x %d: \n",n,m);

    for (int i=0; i < n; i++) {
        for (int j=0; j< m; j++){
            printf("%d ",matriz[i][j]);
            if (matriz[i][j] > max){    //recorre el elemento mayor
                max = matriz[i][j];
            }
            if (matriz[i][j] < min){     //recorre el elemento menor
                min = matriz[i][j];
            }
        }
        printf("\n");
    }
    system("PAUSE");
    printf("--------------------------------------------------------------------------\n");
    printf("El valor minimo de esta matriz es %d y el mayor valor %d \n",min,max);
    printf("---------------------------------------------------------------------------\n");

    return 0;

}
