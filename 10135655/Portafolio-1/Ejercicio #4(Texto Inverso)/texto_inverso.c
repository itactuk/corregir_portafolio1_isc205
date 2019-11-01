//
// Created by diego on 1/10/2019.
//

#include <stdio.h>

void inverso(char letra)
{
    letra = getchar();

    if(letra == '.')
    {
        return;
    }
    else
    {
        inverso(letra);
    }

    printf("%c",letra);
}