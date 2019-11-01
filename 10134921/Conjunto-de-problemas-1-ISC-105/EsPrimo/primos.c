//
// Created by RobDom01 on 11/9/2019.
//


#include<stdio.h>
#include<math.h>
#include "primos.h"

int Es_Primo(int a){

    int i;

    if(a == 2)
        return 1;

    for(i=2 ; i <= floor(sqrt(a)); i++) {
        if (a % i == 0)
            return 0;
    }

    return 1;
}

void Ver_Primos(int a, int array[]){

    int i;

    for(i=0 ; i < a; i++){

        printf("%d ",array[i]);
    }
}