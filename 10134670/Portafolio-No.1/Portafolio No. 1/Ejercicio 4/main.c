#include <stdio.h>
#define ESPACIO '\n'
/*Como deberia de ser*/
void inverter()
{
    char c;
    if ((c = getchar()) != ESPACIO)
        inverter();
    putchar(c); //en este caso se pudo haber usado un printf
    return ;
}

int main()
{
    printf("introduzca una palabra    \n");
    inverter();
}

