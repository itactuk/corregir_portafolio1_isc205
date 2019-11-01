//
// Created by hola on 01/11/2019.
//

#include "punto3.h"

int imprimir_primos(int ctd){

    int num = ctd-1,i,j ;

    printf("2  "); //El dos va por default, ya que es el unico numero primo/par.
    //No se imprimira el uno, ya que este no es considerado un numero primo
    for (i = 2; i <=ctd; )
    {
        for ( j = 2 ; j <= num  ; j++ )
        {
            if ( num%j == 0 )//Buscamos el residuo de ir dividiendo entre el evaluador hasta encontrar un numero que divida al otro ademas de 1 y  el mismo
            {
                break;
            }
        }
        if (j==num)
        {
        printf("%d  ", num);
        i++;
        }
        num++;
    }
}