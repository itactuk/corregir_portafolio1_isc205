#include <stdio.h>

int valorusuario();
void listaprimo(int valor);

int main() {
    int valor = valorusuario();
    listaprimo(valor);
    return 0;
}


int valorusuario() {
    int valor;
    printf("Hasta que numero quieres los numeros primos?: ");
    scanf("%d", &valor);
    return valor;
}

void listaprimo( int n2) {
     int n1 = 1;
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
        if ( primo  )
            printf( "%d  ", i );
     }
     return ;
 }
