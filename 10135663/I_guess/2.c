#include <stdio.h>
#include <stdarg.h>

double VMaximo(double numero, ...)
{
    double max = 0, num;
    va_list valor;
    va_start(valor, numero);
    for (int i = 0; i < numero; i++)
    {
        num = va_arg(valor, int);
        if (num > max)
        {
            max = num;
        }
    }
    va_end(valor);
    return max;
}

int main(void)
{
    printf("El valor maximo es: %.2f\n",VMaximo(3,1,4,8));
}
