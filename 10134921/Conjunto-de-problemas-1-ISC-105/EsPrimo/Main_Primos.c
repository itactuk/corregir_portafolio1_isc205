#include <stdio.h>
#include "primos.h"

int main(){

        int n, i,j = 2,cont = 0;

        printf("Escriba la cantidad de primos que desea: ");
        scanf("%d",&n);

        int array[n];
        i = n;

        while(i >= 0){
            if (Es_Primo(j)) {
                array[cont] = j;
                cont++;
                i--;
            }
            j++;
        }

        Ver_Primos(n,array);

        return 0;
}
