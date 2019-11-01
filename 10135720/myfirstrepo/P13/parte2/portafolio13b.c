//
// Created by admin on 18/10/2019.
//

#include "portafolio13b.h"

long long int Factorial(int numero){

    if(numero==0)
        return 1;

    else
        return (numero * Factorial(numero-1));
}
