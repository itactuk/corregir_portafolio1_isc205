#include <stdio.h>

/*Programar un algoritmo recursivo que permita sumar los elementos de una matriz de enteros.*/

int suma(int arreglo[],int num);

int main()
{
    int cantnumeros,i;

    do {
        printf("Ingresa la cantidad de n%cmeros para el arreglo[MAYOR A CERO]: ", 163);
        scanf("%d", &cantnumeros);
    }while (cantnumeros <= 0);

    int arreglo[cantnumeros];

    printf("Ingresa los elementos del arreglo: \n");

    for(i=0; i < cantnumeros; i++){

        printf("\nN%cmero %d: ",163,i+1);
        scanf("%d",&arreglo[i]);
    }

    printf("\nResultado: %d",  suma(arreglo,cantnumeros - 1));

}

int suma(int arreglo[], int num) {

    if (num==0)
        return arreglo[num];

    else
        return suma(arreglo,num-1)+arreglo[num];

}
