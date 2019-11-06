#include <stdio.h>
#include <stdlib.h>

int sum(int [][5],int,int,int);


int main()
{
    int aray[][5] = {{1,2,3,4,5},
                     {5,4,1,2,6},
                     {9,7,3,2,9},
                     {6,9,3,1,5},
                     {7,8,9,2,6}};
    int a,b,i,j,sumaray;
    a = 5;
    b = 5;

    sumaray = sum(aray,a,b,b);
    printf("La suma de los elementos es: %d",sumaray);

    return 0;
}


int sum(int aray[][5],int a,int b,int k) //No estaba hecha para sumar matricez sino vectores
{
    if(a == 0)
    {
        return 0;
    }
    if(b == 1)
    {
        return aray[a-1][b-1] + sum(aray,a-1,k,k);
    }
    if(b > 1)
    {
        return aray[a-1][b-1] + sum(aray,a,b-1,k);
    }
}
