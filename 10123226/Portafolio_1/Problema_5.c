#include <stdio.h>
#include <stdlib.h>

//Prototipo de las funciones
void inversa(int[],int);
//Variables globales
int i,j;

int main()
{
  int cantidad;
  printf("Por favor indique la cantidad de numeros que usted desea digitar: ");//se especifica la cantidad de
  scanf("%d",&cantidad);                                                       //numeros para saber el tamano
                                                                               //del arreglo.
  int numeros[cantidad];
    for(i=0;i<cantidad;i++)
    {
        printf("Por favor digite el valor numero %d: ",i+1);//for para almacenar los valores
        scanf("%d",&numeros[i]);                            //del arreglo.
    }

    printf("\nLos valores del arreglo en orden invertido son: \n\n");

    inversa(numeros,cantidad);//se llamara la funcion inversa para invertir el orden de los valores

    return 0;
}
//funciones desarrolladas
void inversa(int numeros[],int cantidad)
{
   int neew_arreglo[cantidad];

    for(i=cantidad-1,j=0;i>=0;i--,j++)//for en el que 'i' sera el orden del nuevo arreglo
    {                                 //y 'j' el del arreglo de los numeros. los valores del
        neew_arreglo[i] = numeros[j]; //viejo arreglo se van colocando en la ultima posicion del nuevo.
    }

    for(i=0;i<cantidad;i++)//for el cual imprime el nuevo arreglo ya con los valores asignados.
    {
        printf("%d ",neew_arreglo[i]);
    }
}
