#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

double maximo(double x, ...)
{
    double max = 0, n = 0;
    va_list ap;
    va_start(ap,x);
    for (int i=0;i<x;i++)
    {
        n =  va_arg(ap,int);
        if (n > max)
        {
            max = n;
        }else max = max;
    }
    va_end(ap);
    return max;
}


int main()
{
    printf("el valor maximo es = %lf\n",maximo(3,1,8,5));
    printf("el valor maximo es = %lf\n",maximo(5,1,2,3,9,7));
    printf("el valor maximo es = %lf\n",maximo(8,1,2,44,969,5,4,7,3));
    return 0;
}
