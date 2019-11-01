#include <stdio.h>
#include <string.h>
int dlt_oracion(char parrafo[1000]);
int main(void){
    char parrafo[1000];
    int aumento;
    printf("Digite el frase:\n");
    gets(parrafo);
    char *punt = &parrafo;
    aumento=dlt_oracion(parrafo);
    punt+=aumento;
    printf("\n%s",punt);
}

int dlt_oracion(char parrafo[1000]){
    int tamano=strlen(parrafo);
    int punt=0;

    for(int i=0;i<tamano;i++){
        if(parrafo[i]=='.' || parrafo[i]=='?' || parrafo[i]=='!' || parrafo[i]==','){
            punt=i+2;
            return punt;
        }
    }

}


