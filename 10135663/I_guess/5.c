#include <stdio.h>//Bien

void Arreglo_Inverso(int arreglo[], int i, int size)
{
    int nsize;
    if(i < size || i== (size-1))
    {
        nsize=arreglo[size];
        arreglo[size]=arreglo[i];
        arreglo[i]=nsize;
        Arreglo_Inverso(arreglo,i+1,size-1);
    }
    if(i==size)
    {
        return;
    }
}

void Imprimir(int x[],int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d ",x[i]);
    }
}

int main(void)
{
    int i=0;
    int arreglo[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arreglo)/sizeof(arreglo[0]);

    Imprimir(arreglo,size);
    Arreglo_Inverso(arreglo,i,size-1);
    printf("\n");
    Imprimir(arreglo,size);
    printf("\n");

}

