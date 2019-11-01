#include <stdio.h>
#include <stdlib.h>

//variables globales
int i;

int main()
{
    int cantidad,detector = 0;
        printf("Cuantos numeros desea almacenar: "); scanf("%d",&cantidad);
    int numeros[cantidad];
        printf("Ingrese los numeros a continuacion...");
        printf("\n\n");
            for(i=0;i<cantidad;i++)
            {
                printf("Ingrese el valor numero %d: ",i+1);
                scanf("%d",&numeros[i]);
            }
            for(i=0;i<1;i++)
            {
                detector = numeros[i+1];

            }

        printf("\n");
        printf("El segundo valor de numeros que usted digito es: %d\n\n",detector);

    return 0;
}
