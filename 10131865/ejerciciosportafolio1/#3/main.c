#include <stdio.h>

//Hacia todo bien pero empezaba desde el 2 como numero primo cuando el 1 lo es tambien 85/100 Sebastian Sanchez 2018-0032
int valorusuario();
void listaprimo(int valor);

int main() {
    int valor = valorusuario();
    listaprimo(valor);
    return 0;
}


int valorusuario() {
    int valor;
    printf("Hasta que numero quieres los numeros primos?: "); //deberia preguntar mas o menos asi
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
