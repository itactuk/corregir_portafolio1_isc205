#include <stdio.h>
#include <stdlib.h>

void busqueda_binaria(int [], int, int, int);
void ordenamiento(int [], int);
 void limite(int list[], int cantidad);
int i,cantidad;


int main()



{
    int key, tam;
    printf("Digite el tamano de la lista: ");
    scanf("%d", &tam);
    int list[tam];
    printf("Digite los elementos\n");
    for(i = 0; i < tam; i++)
    {
        scanf("%d",&list[i]);
    }

    printf("Digite el numero a buscar\n");
    scanf("%d", &key);
    ordenamiento(list, tam);
    printf("\n");
    busqueda_binaria(list, 0, tam, key);
    limite(list,tam);
}
void ordenamiento(int list[], int tam)
{
    int temp, i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = i; j < tam; j++)
        {
            if (list[i] > list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}

void busqueda_binaria(int list[], int pequeno, int grande, int key)
{
    int mitad;

    if (pequeno > grande)
    {
        printf("tu numero no es en la lista\n");
        return;
    }
    mitad = (pequeno + grande) / 2;
    if (list[mitad] == key)
    {
        printf("numero encontrada %d en el %cndice %d del arreglo ordendado de forma creciente\n",key,161,mitad); //Rosleiry: (-2) Perfecto, pero no devuelve el índice en el que fue encontrado el número
       // printf("El numero entrada es: %d\n",key);
    }

    else if (list[mitad] > key)
    {
        busqueda_binaria(list, pequeno, mitad - 1, key);
    }
    else if (list[mitad] < key)
    {
        busqueda_binaria(list, mitad + 1, grande, key);
    }
}

  void limite(int list[], int cantidad)
{
    int pequeno,grande;
    for (i=0; i<1; i++)
    {
        pequeno=list[i];
        grande=list[i+cantidad-1];
    }
    printf("El indice inferior de la busqueda es: %d.",pequeno);
    printf("\n");
    printf("El indice superior de la busqueda es: %d",grande);
}
