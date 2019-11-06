#include <stdio.h>
#include <stdlib.h>

//Hoja de excel, Sebastian Sancchez 20180032

int cant;
void esPrimo(int n);

int main(){

    int n=1;
    printf("%cCuantos numeros primos desea ver desde la unidad? ",168);
    scanf("%d",&cant);
    esPrimo(cant);

    return 0;
}


void esPrimo(int n){
    int n1 = 1;
    int cont, i, primo;
    for ( i = n1 ; i <= n ; i++ )
    {
        primo = 1;
        cont = 2;

        while ( cont <= i / 2 && primo )
        {
            if ( i % cont == 0 )
                primo = 0;
            cont++;
        }
        if ( primo  )
            printf( "%d  ", i );
    }
    return ;
}

