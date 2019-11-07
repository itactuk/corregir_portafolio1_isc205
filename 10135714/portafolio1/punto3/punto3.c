//
// Created by hola on 01/11/2019.
//

#include "punto3.h"

int imprimir_primos(int n1, int n2){

    int cont, i, primo;
    for ( i = n1 ; i <= n2 ; i++ )
    {
        primo = 1;
        cont = 2;

        while ( cont <= i / 2 && primo )
        {
            if ( i % cont == 0 )
                primo = 0;
            cont++;
        }
        if ( primo )
            printf( "%d ", i );
    }
    return ;
}