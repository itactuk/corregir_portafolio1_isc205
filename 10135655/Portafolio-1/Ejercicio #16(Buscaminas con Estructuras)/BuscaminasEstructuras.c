//
// Created by diego on 9/10/2019.
//

#include <stdlib.h>
#include <time.h>
#include "BuscaminasEstructuras.h"


int colocar_minas(cas ca[20][20], int m, int n, int c)
{
    int i,j;

    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            ca[i][j].casilla = 0;
        }
    }

    srand(time(NULL));

    for(i = 0;i < c;i++)
    {
        int t,t2;
        t =rand() % m;
        t2=rand() % n;

        if(ca[t][t2].casilla == 0)
        {
            ca[t][t2].casilla = 9;
        }
        else if(ca[t][t2].casilla > 0)
        {
            c++;
        }
    }
}


