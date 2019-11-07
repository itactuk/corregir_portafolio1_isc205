#include <stdio.h>
#include <stdarg.h>


double VMaximo(double numero, ...)
{
    double max = 0, num;

    va_list valor;
    va_start(valor, numero);

    for(int i=0; i < numero; i++)
    {
        num = va_arg(valor, double);//tu lista recibe doubles, no enteros -5

        if(num > max)
            max = num;
    }

    va_end(valor);

    return max;
}

int main(void)
{
    printf("El valor maximo es: %.2f\n",VMaximo(3.78,10.2,4.7,88.9560));//no funcionaba con decimales tipo double, que era el proposito del programa.
}                                                                  //-15
