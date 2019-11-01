//
// Created by natasha on 19/9/19.
//

#include <stdio.h>
#include "Invertir_rcsv.h"

void leer_inv(){

    char c = getchar();

    if(c == EOF){
        return;
    }
    leer_inv();

    printf("%c",c);

}