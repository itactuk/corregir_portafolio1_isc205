#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[100];
    int majus=0,i=0;
    printf("escribe un texto\n");
    gets(array);
    while (array[i]!='\0')
    {
        if( array[i]>='A' &&  array[i]<='Z')
        {
            majus++;

        }
        i++;
    }

    printf("ecuentra %d letra majuscula",majus);

    return 0;
}
