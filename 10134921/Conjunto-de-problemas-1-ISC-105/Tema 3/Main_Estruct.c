
#include <stdio.h>
#include "Estruct.h"

int main(){
    est estud;

    printf("Digite el nombre: ");
    scanf("%s",estud.nombre);
    printf("\n");

    printf("Digite el apellido: ");
    scanf("%s",estud.apellido);
    printf("\n");

    printf("Digite la edad: ");
    scanf("%d",&estud.edad);
    printf("\n");

    printf("Digite el sexo: ");
    scanf("%c",&estud.sexo);
    printf("\n");

    return 0;
}