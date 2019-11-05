#include <stdio.h>
#include "3.h"

/*Realice un programa que, utilizando una librer�a propia haga una llamada a una funci�n esPrimo() para generar los primeros N n�meros primos,
seg�n especifique el usuario*/


int main()
{
    int rinf, rsup, i;

    printf("Para generar los primeros N n%cmeros primos en un rango,ingrese el rango inferior y superior separados por ESPACIO respectivamente: ",163);
    scanf("%d%d",&rinf,&rsup);


    while(rinf<=0 || rsup<=0 || rinf>=rsup){

        printf("\nIntente de nuevo: ");
        scanf("%d%d",&rinf,&rsup);
    }

    for(i=rinf;i<=rsup;i++)
    {
        if(esprimo(i)==0)
            printf("El valor %d es primo\n",i);
    }


}




