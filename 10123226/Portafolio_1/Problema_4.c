#include <stdio.h>
#include <stdlib.h>

//prototipo de la funcion
void texto_invertido();
//variables globales
int i;

int main()
{

    printf("Digite un texto: ");
    texto_invertido();

    return 0;
}

//funciones desarroladas
void texto_invertido()
{
    char texto = getchar();
        if(texto=='\n')
        {
            return;
        }
        else
        {
            texto_invertido();
            putchar(texto);
        }

}
