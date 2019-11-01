#include <stdio.h>

void inverter(char palabra)
{
    palabra = getchar();
    if (palabra == ".")
        {
          return;
        }
    else
        {
            inverter(palabra);
        }
    printf("%c", palabra);
}

int main()
{
    char c;
    printf("introduzca una palabra letra por letra cuanto termine presione punto (.)(.)   \n");
    inverter (c);
}

