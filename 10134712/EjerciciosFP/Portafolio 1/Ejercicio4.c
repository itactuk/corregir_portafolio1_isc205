#include <stdio.h>


/*Realice un programa que permita imprimir una l�nea de texto de manera inversa utilizando una funci�n recursiva sin emplear arreglos. No Hacer Minunit*/

void inver_cadena(const char arr[], char inv[], int pos, int cant);

int main()
{
    int cantcaracteres;

    printf("Ingrese la cantidad de caracteres: ");
    scanf("%d",&cantcaracteres);

    char h[cantcaracteres], inv[cantcaracteres];

    printf("\nIngrese la palabra a invertir: ");
    scanf("%s",h);

    //si le sale mal es poque no puso la cant de caracteres correcta


    inver_cadena(h, inv, 0, cantcaracteres -1 );

    printf("%s", inv);

    return 0;
}



void inver_cadena(const char arr[], char inv[], int pos, int cant){
    if (cant < 0)
    {
        inv[pos] = '\0';
        return;
    }

    inv[pos] = arr[cant];
    inver_cadena(arr, inv, pos + 1, cant - 1);
}
