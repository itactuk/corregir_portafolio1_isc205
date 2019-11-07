#include <stdio.h>
#include <string.h>

void Invertir(char word[50],int size)//muy bien,aunque mejor llamar indice a la variable size porque es lo que utiliza, no su tamaño.-5 a falta de .c y .h
{                                           //seria mejor que el main estuviera de primero en un codigo, solo recomendacion
    if(size < 0)
    {
        return;
    }
    else
    {
        printf("%c",word[size]);
        Invertir(word,size-1);
    }
}


int main(void)
{
    char palabra[50];

    printf("Digite la palabra/frase: \n");
    gets(palabra);

    int size = strlen(palabra);
    Invertir(palabra,size-1);
}
