//
// Created by sebastian on 10/18/2019.
//

#include <stdio.h>

int suma(int mat[][3],int i, int j,int k);

int main () {

    int matriz[3][3]={1,2,3,4,5,6};

    printf("%d",suma(matriz,3,3,3));

    return 0;

}

int suma(int mat[][3],int i,int j,int k)
{
    if( i < 1)
    {
        return 0;
    }
    else if(j == 1)
    {
        return mat[i-1][j-1] + suma(mat,i-1,j=k,k);
    }
    else if(j > 1)
    {
        return mat[i-1][j-1] + suma(mat,i,j-1,k);
    }
}



