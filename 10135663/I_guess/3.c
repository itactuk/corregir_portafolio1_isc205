#include <stdio.h>

void EsPrimo(int numero)
{
    int contador, i = 3, x;

    if (numero >= 1) {
        printf("Los primeros %d numeros primos son:\n", numero);
        printf("2\n");
    }

    for (contador = 2; contador <= numero;) {
        for (x = 2; x <= i - 1; x++) {
            if (i % x == 0)
                break;
        }
        if (x == i) {
            printf("%d\n", i);
            contador++;
        }
        i++;

    }
}

int main()
{
    int cantidad;

    printf("Que cantidad de numeros primos quiere: ");
    scanf("%d",&cantidad);

    EsPrimo(cantidad);
    return 0;
}

