#include <stdio.h>
// -5 lib sin uso
#include <stdarg.h>
#include <float.h>

void maximo(double n,...);//int no, deberia ser double -5
int main()
{
    printf("busqueda del maximo\n");
    maximo(6.2,3.4,7.1,-13.5,0.2,9.5,10.4);//-5 esta obviando el primer valor, si pongo el max ahi no funciona
    return 0;
}

void maximo(double n,...)//recomiendo solo retornar valores en tu funcion, los printf en el main
{
    double max=DBL_MIN,actual;//es mejor decir  que el max es igual a un valor para evitar usar va_arg
    va_list puntero;
    int i;

    va_start(puntero,n);
    //max = actual = va_arg(puntero,double);
    //printf("Argumento actual: %.2f\n",inicio); se ahorra un printf

    for (i=1;i <= n;i++)
    {
        actual = va_arg(puntero,double);
        printf("Argumento actual: %.2f\n",actual);
        if (actual>max)
        {
            max=actual;
        }
    }
    printf("Maximo de la lista de %.0f numeros es: %.2f\n",n,max); //.0f porque la  var n almacena doubles
    va_end(puntero);
}
