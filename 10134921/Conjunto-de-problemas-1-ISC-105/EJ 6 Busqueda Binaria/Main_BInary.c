//
// Created by natasha on 19/9/19.
//

#include <stdio.h>
#include "Binary_Search.h"

int main(){

    int n,x,i,r;

    printf("Ingrese la cantidad de elementos del arreglo: "); //5
    scanf("%d",&n);

    int array[n];

    printf("Ingrese los elementos del arreglo: \n");  //5,4,8,1,6
    for(i=0; i<n;i++){
        fflush(stdin);
        scanf("%d",&array[i]);
    }

    printf("\n");

    printf("Ingrese el n%cmero que desea buscar en el arreglo: ",163);
    scanf("%d",&x);

    Bubble_Sort(array,n);

    r = Binary_Search(array,x,0,n-1);

    if(r == -1){
        printf("Ese n%cmero no esta en el arreglo.",163);
    }else{
        printf("El n%cmero que quiere buscar esta en la posici%cn %d.", 163, 162, r);
    }
    return 0;
}


