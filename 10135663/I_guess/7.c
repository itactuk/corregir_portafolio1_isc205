#include <stdio.h>

int Sumar_Matriz(int f, int c, int matriz[f][c], int suma)
{


//    if(i < 0)//las condiciones no tienen sentido, no retorna la suma de la matriz, mejor emplea un bucle.-20
//    {
//        return suma;
//    }
//    if(i >= 0)
//    {
//        if(j>=0)
//        {
//            suma += matriz[i][j];
//            Sumar_Matriz(i,j-1,matriz,suma);
//        }
//        if(j < 0)
//        {
//            Sumar_Matriz(i-1,j=2,matriz,suma);
//        }
//
//    }

    for(int i=0;i< f;i++)
    {
        for(int j=0;j< c;j++)
        {
            suma +=	matriz[i][j];

        }

    }
    return  suma;

}

int main(void){

    int f=3,c=3,suma=0, sumar;// x se puede ahorrar perfectamente -5  //llamando a f commo cant de filas y c como cant de columnas

    int matriz[3][3]={{2,1,1},//cambie el primer uno por un dos,en el original y dio 12 en lugar de 10, ahora da 10 como deberia
                      {1,1,1},
                      {1,1,1}};
    sumar = Sumar_Matriz(f,c,matriz,suma);//-5 por usar suma como parametro, pero tambien usarla para llamar a la funcion, debiste declarar otra.
    printf("La suma de las cantidades en la matriz es: %d",sumar);
}
