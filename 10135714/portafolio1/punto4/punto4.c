
#include "punto4.h"
void inv()
{
    char palabra_a_invertir = getchar();

    if(palabra_a_invertir == 32 )//32 es el valor de espacio en a tabla ascii//cuando el programa detecte un espacio, se va detener y al presionar la tecla enter, dara la inversa de la palabra ingresada
    {
        printf("La inversa de la palabra que ingresaste es: ");
    }
    else
    {
        inv();
    }


   putchar(palabra_a_invertir);

}
