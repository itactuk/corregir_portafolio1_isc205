#include <stdio.h>
#include <string.h>

int main(void){

    char frase[1000];
    int caracter,tamano;

    printf("Digite su frase: ");
    gets(frase);
    tamano=strlen(frase);
    printf("\n");

    for(int i=0; i<tamano; i++){
        caracter=frase[i];

        if(caracter!=32){
            printf("%c",caracter);

        }else{
            printf("\n");
        }
    }
    printf("\n\n");
}
