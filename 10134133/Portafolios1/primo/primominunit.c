//
// Created by sebastian on 10/19/2019.
//

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
        if ( primo )
            printf( "%d ", i );
    }
    return ;
}