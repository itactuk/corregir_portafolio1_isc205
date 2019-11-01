//
// Created by admin on 17/10/2019.
//

#include "Portafolio4.h"

void pinversa()
{
    char p = getchar();

    if(p == 32)

        printf("\n Tu inversa es\n");

    else
        pinversa();

    printf("%c",p);

}

