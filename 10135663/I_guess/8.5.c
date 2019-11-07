#include <stdio.h>//-50, el punto era hacer 2 problemas, solo hay uno, vale la mitad.

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
    int cantidad = 80;

    EsPrimo(cantidad);

    return 0;
}

