//
// Created by hola on 01/11/2019.
//

#include "punto3.h"

int imprimir_primos(int n){
     int n1 = 1;           //Hacia todo bien pero empezaba desde el 2 como numero primo cuando el 1 lo es tambien 85/100. Sebastian Sanchez 2018-0032
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