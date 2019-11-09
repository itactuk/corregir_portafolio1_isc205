//
// Created by hola on 01/11/2019.
//

#include "punto2.h"


double doublemax(double valor, ...){

    double valor_maximo = 0, n;
    va_list maxdou;
    va_start(maxdou,valor);

    for (int i=0;i<valor;i++){
        n=va_arg(maxdou,double);//-5 error tipo de dato

        if (n > valor_maximo)
            valor_maximo = n;
    }

    va_end(maxdou);
    return printf("El maximo valor ingresado es: %.3f ",valor_maximo);
}
