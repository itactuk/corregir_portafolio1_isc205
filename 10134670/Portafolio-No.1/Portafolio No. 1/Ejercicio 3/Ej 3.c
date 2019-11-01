#include <stdlib.h>
#include <stdio.h>

int esprimo(int x, int y)
{
    int cont, pr;
    for ( x ; x <= y ; x++ )
    {
        pr = 1;
        cont = 2;
        while ( cont <= x / 2 && pr )
        {
            if ( x % cont == 0 )
                pr = 0;
            cont++;
        }
        if ( pr )
            printf( "\t%d", x );
    }
}


int main()
{
    int n1,n2;
    printf("introduzca el primer numero del rango\n");
    scanf("%d",&n1);
    printf("introduzca el ultimo numero del rango\n");
    scanf("%d",&n2);
    esprimo(n1,n2);
}
