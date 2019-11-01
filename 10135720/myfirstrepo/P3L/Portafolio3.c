//
// Created by admin on 17/10/2019.
//

#include "Portafolio3.h"
void esPrimo(int cant){

    int num, i, contador, x;
    num=3;
    i=0;

    printf(" 2\t");
    for (contador = 2; contador <=cant; ){
        for ( x = 2 ; x <= num - 1 ; x++ ){
            if ( num%x == 0 )
                break;
        }
        if ( x == num ){

           printf("%d\t", num);
           i++;
            contador++;
        }
        num++;
    }
}

