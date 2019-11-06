#include <stdio.h>
#include <stdlib.h>

void orden(int [],int);
void busqueda(int [],int,int,int);
void limit(int [],int);



int main()
{
    int res,tay,i;
    printf("entre el tamano de la lista: ");
    scanf("%d",&tay);
    int lista[tay];
    printf("entre los elementos\n");
    for(i=0;i<tay;i++)
    {
        scanf("%d",lista[i]); //No es necesario poner & si es un arreglo
    }

    printf("entre el numero a buscar\n");
    scanf("%d",&res);
    orden(lista,tay);
    printf("\n");
    busqueda(lista,0,tay,res);
    limit(lista,tay);
}

void orden(int lista[],int tay)
{
    int i,j,now;
    for (i=0;i<tay;i++)
    {
        for (j=i;j<tay;j++)
        {
            if (lista[i]>lista[j])
            {
                now=lista[i];
                lista[i]=lista[j];
                lista[j]=now;
            }
        }
    }
}

void busqueda(int lista[],int a,int tay,int res)
{
    int mitad;
    if (a>tay)
    {
        printf("tu numero no esta en la lista\n");
        return;
    }

    mitad = (a+tay)/2;
    if (lista[mitad]==res)
    {
        printf("El numero busqueda esta en al posicion: %d\n",mitad); //El objetivo es buscar la posicion del numero que estamos buscando
    }
    else if (lista[mitad]>res)
    {
        busqueda(lista,a,mitad-1,res);
    }
    else if (lista[mitad]<res)
    {
        busqueda(lista,mitad+1,tay,res);
    }
}

void limit(int lista[],int tay)
{
    int i,inf,sup;

    for (i=0;i<tay;i++)
    {
        inf=lista[0];
        if(inf>lista[i])
        {
            inf=lista[i];
        }
        sup=lista[0];
        if(sup<lista[i])
        {
            sup=lista[i];
        }
    }
    printf("El indice inferior de la busqueda es: %d",inf);
    printf("\n");
    printf("El indice superior de la busqueda es: %d",sup);
}
