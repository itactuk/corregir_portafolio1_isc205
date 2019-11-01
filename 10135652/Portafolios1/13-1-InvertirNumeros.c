#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Ingrese la cantidad de numeros que quiere invertir: ");
    scanf("%d", &n);
    int num[n];

    for(i=0;i<n;i++){
        printf("Ingrese el numero de la posicion %d: ", i);
        scanf("%d", &num[i]);
    }

    for (i=n-1;i>=0;--i){
         printf("%d",num[i]);
     }

     return 0;
}
