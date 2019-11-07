#include <stdio.h>
#include <stdlib.h>
//No es la manera de buscar binaria y recursivamente un elemento.
// Faltaron unas cosas a la funcion encima de que no hace una busqueda binaria correctamente 75/100

//esta deberia de ser la funcion
/*int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha)
        return -1;

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);

    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio){
        return indiceDeLaMitad;
    }

    if (busqueda < valorQueEstaEnElMedio){

        derecha = indiceDeLaMitad - 1;
    }else{

        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}*/

int main()
{
    int i, numds,numinic = 0, numbusc, result;
    printf("introduzca la cantidad de numeros que desea:  \n");
    scanf("%d",&numds);
    int arr[numds];
    for (i = 1; i < (numds+1) ;i++)
    {
        printf("Introduzca el numero %d:  \n", i);
        scanf("%d", &arr[i-1]);
    }
    printf("introduzca de cual numero quiere saber la poscision:  \n");
    scanf("%d", &numbusc);
    result = bbin (arr,numinic,numds-1,numbusc);
    printf("%d", result);

}

