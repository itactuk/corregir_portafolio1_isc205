//
// Created by diego on 16/9/2019.
//

#include "max.h"
#include <stdio.h>
#include <stdarg.h>


double maxi(int x,...)
{
    va_list point;
    int i;
    double max = 0;

    va_start(point,x);

    for(i = x;i > 0;i--)
    {
        double n = va_arg(point,int);
        if(n > max)
            max = n;
        else
            max = max;
    }
    va_end(point);
    printf("\n");

    return max;
}

