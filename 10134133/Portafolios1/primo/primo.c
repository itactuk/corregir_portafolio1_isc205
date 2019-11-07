#include <stdio.h>
#include <stdlib.h>//-5 no necesaria
#include "primo.h"

void esprimo(int n1, int n2);

int main () {
    int n1,n2,numeros;
    printf("Primos!\n");
    printf("Ingrese primer rango de numeros:  ");
    scanf("%d",&n1);
    printf("\nIngrese segundo rango de numeros:  ");
    scanf("%d", &n2);
    printf("\nAhora se mostraran los numeros primos del %d al %d\n",n1,n2);
    esprimo(n1,n2);
    return 0;
}

