#include <stdio.h>

int Sumar_Matriz(int i, int j,int x, int matriz[i][j], int suma)
{

    if(i < 0)
    {
        return suma;
    }
    if(i >= 0)
    {
        if(j>=0)
        {
            suma += matriz[i][j];
            Sumar_Matriz(i,j-1,x,matriz,suma);
        }
        if(j < 0)
        {
            Sumar_Matriz(i-1,j=x,x,matriz,suma);
        }

    }
}

int main(void){
    int i=2,j=2,x=j,suma=0;
    int matriz[3][3]={{1,1,1},
                      {1,1,1},
                      {1,1,1}};
    suma = Sumar_Matriz(i,j,x,matriz,suma);
    printf("La suma de las cantidades en la matriz es: %d",suma);
}
