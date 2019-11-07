#include <stdio.h>
#include <stdarg.h>


double average (double cnt,...);//-10 ES DE doubles

int main() {

    printf("Maximo!\n");
    printf( "Average Maximo: %.2f\n",average(3,1.554,4.8345,2.5));
    return 0;
}

double average (double cnt,...) {

    double max = 0, i,n;
    va_list x;

    va_start(x, cnt);
    for (i = 0; i < cnt; i++)
    {
        n = va_arg(x, double);//-5 declarar n en el ciclo le quita el valor de los decimale
        if (n > max) {
            max = n;
        }
    }
    va_end(x);
    return max;
}
