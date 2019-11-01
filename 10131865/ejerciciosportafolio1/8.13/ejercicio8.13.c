#include <stdio.h>
#include <string.h>


int main(void)
{
    char pa[100];
    int i=0, cont=0, cant=0;
    int size;
    printf("Ingrese el texto\n");
    gets(pa);
    size = strlen(pa);
    printf("\n cadena original....: %s\n", pa);
    for(; pa[i]; i++)
    {
        if ((pa[i] == ' ') || (!pa[i+1] && ++cont && ++i))
        {
            if (cont == 4)
            {
                memset(pa+(i-cont), '*', cont);
                cant++;
            }

            cont = 0;
        }
        else
            cont++;
    }

    printf("\n Cadena reemplazada.: %s\n", pa);
    printf("\n Se han sustituido un total de %d palabras.\n\n", cant);
    printf("el texto contiene %d",size);

    return 0;
}
