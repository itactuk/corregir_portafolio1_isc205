#include "portafolio13b.h"


int main()
{
    int  filas,i, j;

    printf("Digite la cantidad de filas: ");
    scanf("%d",&filas);

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j <= (filas - i - 2); j++) {
            printf(" ");
        }
        for (j = 0 ; j <= i; j++)
            printf("%lld ", Factorial(i)/(Factorial(j)*Factorial(i-j)));
        printf("\n");
    }

}

