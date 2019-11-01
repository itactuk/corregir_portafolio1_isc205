#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>



void max(int n,...)
{
    double max,actual;
    va_list ptr;
    int i;
    va_start(ptr,n);
    max = actual = va_arg(ptr,double);
    printf("\t\tNumero: %.2f\n",actual);
    for (i=2;i<=n;i++)
    {
        actual = va_arg(ptr,double);
        printf("\t\tNumero: %.2f\n",actual);
        if (actual>max)
        {
            max=actual;
        }
    }
    printf("\t\tEl numero Maximo de la lista de %d numeros es: %.2f\n",n,max);
    va_end(ptr);
}

void max(int n,...);
int main()
{
    printf("\t\t La busqueda del maximo!!!!!!\n");
    max(6,3.0,4.0,-12.5,1.2,4.5,6.4);
    return 0;
}
