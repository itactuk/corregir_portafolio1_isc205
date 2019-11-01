//
// Created by diego on 17/9/2019.
//

#include "inverso.h"

void inversa(int arreglo[],int y, int x)
{
    int aux = 0;

    if(y < x)
    {
        aux = arreglo[x];
        arreglo[x] = arreglo[y];
        arreglo[y] = aux;

        inversa(arreglo,y + 1,x - 1);
    }
}
