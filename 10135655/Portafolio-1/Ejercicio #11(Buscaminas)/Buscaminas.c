//
// Created by diego on 9/10/2019.
//

#include <stdio.h>
#include <stdlib.h>

void gbombas(int x[100][100],int m,int n,int c)
{
    int i,j;

    for(i = 0; i < m;i++)
    {
        for(j = 0; j < n;j++)
        {
            x[i][j] = 0;
        }
    }

    for(i = 0;i < c;i++)
    {
        int t,t2;

        t =rand() % m;
        t2=rand() % n;

        if(x[t][t2] == 0)
        {
            x[t][t2] = 9;
        }
        else
        {
            c++;
        }
    }
}

void colocar_numeros(int x[100][100], int m, int n)
{
    int i,j,cont;

    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            cont = 0;

            if (x[i + 1][j] == 9)
            {
                cont++;
            }
            if(x[i+1][j+1] == 9)
            {
                cont++;
            }
            if(x[i][j+1] == 9)
            {
                cont++;
            }
            if(x[i-1][j+1] == 9)
            {
                cont++;
            }
            if(x[i-1][j] == 9)
            {
                cont++;
            }
            if(x[i-1][j-1] == 9)
            {
                cont++;
            }
            if(x[i][j-1] == 9)
            {
                cont++;
            }
            if(x[i+1][j-1] == 9)
            {
                cont++;
            }

            if(x[i][j] == 0)
            {
                x[i][j] = cont;
            }
        }
    }
}

void abrir (int x[100][100], int x2[100][100], int m, int n, int i, int j)
{
    if(x[i][j] > 0 &&  x[i][j] <= 9)
    {
        x2[i][j] = x[i][j];
        return;
    }
    else if(x[i][j] == 10)
    {
        return;
    }
    else if(i >= m || i < 0)
    {
        return;
    }
    else if(j >= n || j < 0)
    {
        return;
    }
    else if(x[i][j] == 0)
    {
        x[i][j] = 10;
        x2[i][j] = 0;
        abrir(x,x2,m,n,i + 1,j);
        abrir(x,x2,m,n,i + 1,j + 1);
        abrir(x,x2,m,n,i,j +1);
        abrir(x,x2,m,n,i - 1, j + 1);
        abrir(x,x2,m,n,i - 1,j);
        abrir(x,x2,m,n,i-1,j-1);
        abrir(x,x2,m,n,i,j-1);
        abrir(x,x2,m,n,i+1,j-1);
    }

}





