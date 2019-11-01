#include <stdio.h>
#include <stdlib.h>

//costantes
#define FILAS 2
#define COLUMNAS 2
//variables globales
int i,j,x,z;
//prototipo de funciones
void matrix_invertida(int[FILAS][COLUMNAS]);

int main()
{
   int matrix[FILAS][COLUMNAS],saltador = 0;

        printf("Ingresa los valores a continuacion...\n\n");

            for(i=0;i<FILAS;i++)
            {
                for(j=0;j<COLUMNAS;j++)
                {
                    printf("Ingrese numero: ");
                    scanf("%d",&matrix[i][j]);
                }
            }

            printf("\nMostrando matrix...\n\n");

            for(i=0;i<FILAS;i++)
            {
                for(j=0;j<COLUMNAS;j++)
                {
                    printf("%d ",matrix[i][j]);
                    saltador++;
                        if(saltador==COLUMNAS)
                        {
                            printf("\n");
                            saltador = 0;
                        }
                }
            }


    matrix_invertida(matrix);

    return 0;
}
void matrix_invertida(int matrix[FILAS][COLUMNAS])

{

    int matrix_opuesta[FILAS][COLUMNAS],saltador2 = 0;


        for(i=0,x=FILAS-1;i<FILAS;i++,x--)
                    {
                        for(j=0,z=COLUMNAS-1;j<COLUMNAS;j++,z--)
                        {
                            matrix_opuesta[x][z] = matrix[i][j];
                        }
                    }

                  printf("\n\nMostrando matrix invertida...\n\n");

            for(i=0;i<FILAS;i++)
                    {
                        for(j=0;j<COLUMNAS;j++)
                        {
                            printf("%d ",matrix_opuesta[i][j]);
                            saltador2++;
                                if(saltador2==COLUMNAS)
                                {
                                    printf("\n");
                                    saltador2 = 0;
                                }
                        }
                    }



}
