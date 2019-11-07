//
// Created by sebastian on 10/18/2019.
//

#include <stdio.h>

int suma(int mat[][3],int i, int j,int k);

int main () {

    int matriz[3][3]={{2,1,0},// pasale una 3x3 para que se vea mejor todos los valores de la matrriz
                      {2,1,1},
                      {2,1,1}};
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



