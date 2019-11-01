#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define P 5
#define L 5

int buscar(char lista[5][5], char palabra[20], int n);

int main(void){
    char lista[5][5]={"pala",
                      "PAla",
                      "palA",
                      "pala",
                      "palA",
                     };
    char palabra[20];
    int n;
    int cantidad;
    printf("Digite la palabra:  ");
    scanf("%s",&palabra);
    printf("Hasta que linea desea examinar?  ");
    scanf("%d",&n);
    cantidad=buscar(lista,palabra,n);
    if(cantidad==1)
        printf("en %d linea la palabra %s se repite %d vez\n",n,palabra,cantidad);
    else
        printf("en %d lineas la palabra ' %s ' se repite %d veces\n",n,palabra,cantidad);
}
int buscar(char lista[P][L], char palabra[20], int n){
    int tamano;
    int coincidencia=0;
    int cantidad=0;
    char tmp[20];
    for(int i=0;i<n;i++){
        for(int j=0;j<L;j++){
            tmp[j]=lista[i][j];
        }
        tamano = strlen(tmp);
        for(int m=0;m<tamano;m++){
            if(palabra[m]==tmp[m]){
                coincidencia=1;
            }
            else{
                coincidencia=0;
            }
        }
        if(coincidencia==1){
            cantidad++;
        }
    }
    return cantidad;
}
