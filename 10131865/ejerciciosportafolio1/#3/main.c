#include <stdio.h>

int valorusuario();
void listaprimo(int valor);

int main() {
    int valor = valorusuario();
    listaprimo(valor);
    return 0;
}


int valorusuario() {
    int valor;
    printf("Hasta que numero quieres los numeros primos?: ");
    scanf("%d", &valor);
    return valor;
}

void listaprimo(int valor) {
     int  valorprimos;

     printf("Los numeros primos son: ");

     for (int i = 2; i <= valor; i++) {
         valorprimos = 1;

         for (int j = 2; j <= i / 2; j++) {


             if (i % j == 0) {
                valorprimos = 0;
                break;
             }
         }


         if (valorprimos == 1)
            printf("%d, ", i);
     }
     printf("\n");
 }

