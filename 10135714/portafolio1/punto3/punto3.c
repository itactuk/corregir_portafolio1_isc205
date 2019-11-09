//
// Created by hola on 01/11/2019.
//

#include "punto3.h"

int imprimir_primos(int n){
                //Hacia todo bien pero empezaba desde el 2 como numero primo cuando el 1 lo es tambien 85/100. Sebastian Sanchez 2018-0032
    int cont, i, primo;   //No, Sebas se equivoca, el 1 no es primo -5, n1 no es necesaria, di que i =1 -nicol
                        //-10, tienes un ciclo innecesario
    for ( i = 1 ; i <= n2 ; i++ )
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