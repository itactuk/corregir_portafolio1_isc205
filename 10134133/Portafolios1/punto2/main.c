#include <stdio.h>
#include <stdarg.h>


double average (int cnt,...);

int main() {
    printf("Maximo!\n");
    printf( "Average Maximo: %lf\n",average(3,1.5,4.8,2.5));
    return 0;
}

double average (int cnt,...) {
    double max = 0, i;
    va_list x;
    va_start(x, cnt);
    for (i = 0; i < cnt; i++)
    {
        int n = va_arg(x, double);
        if (n > max) {
            max = n;
        }
    }
    va_end(x);
    return max;
}
