#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void maximo(int n,...);
int main()
{
    printf("busqueda del maximo\n");
    maximo(6.2,3.4,7.1,-13.5,0.2,9.5,10.4);
    return 0;
}

void maximo(int n,...)
{
    double max,actual;
    va_list puntero;
    int i;
    va_start(puntero,n);
    max = actual = va_arg(puntero,double);
    printf("Argumento actual: %.2f\n",actual);
    for (i=2;i<=n;i++)
    {
        actual = va_arg(puntero,double);
        printf("Argumento actual: %.2f\n",actual);
        if (actual>max)
        {
            max=actual;
        }
    }
    printf("Maximo de la lista de %d numeros es: %.2f\n",n,max);
    va_end(puntero);
}
