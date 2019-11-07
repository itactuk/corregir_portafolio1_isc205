//
// Created by sebastian on 10/3/2019.
//

#ifndef UNTITLED2_PRIMO_H//-10 bucle innecesario
#define UNTITLED2_PRIMO_H//-10, el mandato no pide rangos, pide cant de primos
#endif //UNTITLED2_PRIMO_H //-5 por crear funcion en .h

void esprimo(int n1, int n2){
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
        if ( primo )//dice que 1 y 0 son primos -10
            printf( "%d ", i );
    }
    return ;
}