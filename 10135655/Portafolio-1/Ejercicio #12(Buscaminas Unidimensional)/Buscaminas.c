//
// Created by diego on 9/10/2019.
//

#include <stdlib.h>
#include <time.h>

void gbombas(int x[100],int m,int c)
{
    int i,j;
    srand(time(NULL));

    for(i = 0; i < m;i++)
    {
            x[i] = 0;
    }

    for(i = 0;i < c;i++)
    {
        int t;
        t =rand() % m;

        if(x[t] == 0)
        {
            x[t] = 9;
        }
        else
        {
            c++;
        }
    }
}