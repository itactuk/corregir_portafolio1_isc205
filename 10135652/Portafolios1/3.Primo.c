#include <stdio.h>
#include <stdlib.h>

// Tiene poco coherencia con la logica del usuario. EL codigo no eficiente 75/100

int cant;
void esPrimo(int n);

int main(){

    int n=1;
    printf("De 1 a que numero quisiera ver numeros primos"); //deberia preguntarse de esta manera o relacionado
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

