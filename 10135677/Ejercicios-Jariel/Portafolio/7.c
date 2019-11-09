#include <stdio.h>

int sumar_matriz(int f, int c,int k, int matriz[f][c], int suma);

int main(void){
    int f=2,c=2,k=c,suma=0;
    int matriz[3][3]={{1,1,1},
                      {1,1,1},
                      {1,1,1}};
    suma = sumar_matriz(f,c,k,matriz,suma);
    printf("%d",suma);
}
int sumar_matriz(int f, int c,int k, int matriz[f][c], int suma){

    if(f < 0)
        return suma; //Algunas llaves de mas pero el codigo muy bien 98/100 Sebastian Sanchez 2018-0032
    if(f >= 0)
    {
        if(c>=0)
        {
            suma += matriz[f][c];
            sumar_matriz(f,c-1,k,matriz,suma);
        }
        if(c < 0)
            sumar_matriz(f-1,c=k,k,matriz,suma);


    }
}
