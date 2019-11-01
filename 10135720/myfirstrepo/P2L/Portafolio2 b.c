//
// Created by admin on 17/10/2019.
//

#include "Portafolio2 b.h"

double max(double n, ...){
    
    double numax, num;
    
    numax=0;
    
    va_list valor;
    va_start(valor,n);

    for (int i=0;i<n;i++){
        num=va_arg(valor,int);

        if (num > numax)
            numax = num;
    }

    va_end(valor);
    return numax;
}


