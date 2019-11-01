#include <stdio.h>
#include <stdlib.h>

int sum(int [],int,int);


int main()
{
    int aray[100],a,i,sumaray;

    printf("digame el tamano del arreglo:\n");
    scanf("%d",&a);
    printf("entre los elementos del arreglo:\n");

    for(i=0;i<a;i++)
    {
        scanf("%d",&aray[i]);
    }

    sumaray = sum(aray,0,a);
    printf("La suma de los elementos es: %d",sumaray);

    return 0;
}


int sum(int aray[],int i,int a)
{
    if(i>=a)
    {
        return 0;
    }

    return (aray[i]+sum(aray,i+1,a));
}
