#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define SIZE_MAX 50

#define LADO 60


void imprime_linea(int n);

int main()

{

    char txt[SIZE_MAX];

    int num;

    printf("Ingresa el texto : ");

    gets(txt);

    printf("\n");

//imprimir el cuadro

    imprime_linea(LADO);

//imprimir el texto

    putchar('#');

    num=LADO-2-strlen(txt); //espacio para imprimir
    num/=2;
    for(int i=0 ; i<num/2 ; i++)
    {
        putchar(' ');
    }

    printf("%s", txt);

    for(int i=0 ; i<num/2 ; i++)
    {

        putchar(' ');


    }

    putchar('#');

    putchar('\n');

//cuadro
    imprime_linea(LADO);

    putchar('\n');

}

void imprime_linea(int n)
{
    for(int i=0 ; i<LADO ; i++)

    {

        putchar('#');

    }

    putchar('\n');

}
