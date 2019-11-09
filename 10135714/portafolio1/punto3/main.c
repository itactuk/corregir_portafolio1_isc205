
#include "punto3.h"

int main()
{
    int cantidad,cantidad2;
    printf("De que numero a que numero desea ver los numeros primos?  ",);
    scanf("%d %d",&cantidad,&cantidad2); //aqui pedimos los numeros que seran el rango de primos que saldran
    imprimir_primos(cantidad,cantidad2);
}

