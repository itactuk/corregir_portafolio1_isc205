#include <stdio.h>
#define ESPACIO '\n'
//El programa no corria encima de que el codigo no era para nada efectivo 50/100.Sebastian Sanchez
void inverter()
{
    char c;
    if ((c = getchar()) != ESPACIO)
        inverter();
    putchar(c);
    return ;
}

int main()
{
    printf("introduzca una palabra    \n");
    inverter();
}

