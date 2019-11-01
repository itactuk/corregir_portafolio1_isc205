#include<stdio.h>
#include<conio.h>
#include<string.h>

enum {a,e,x,o,u};

void contar(char texto[100],int vocales[5]);

int main()
{
    char texto[100];
    int vocales[5],i;

    for(i=0;i<5;i++){
        vocales[i]=0;
    }
    printf("Frecuencia de Vocales!\n");
    printf("Escriba una linea de texto: \n");
    gets(texto);
    printf("La linea de texto es: \n%s\n\n",texto);
    contar(texto,vocales);
    printf("\tHISTOGRAMA\n");
    printf("-----------------------------\n");
    printf("A: ");

    for ( int j = 1; j <= vocales[a]; j++ ) {
        printf( "%c ", '*' );
    }
    printf("[%d]",vocales[a]);
    printf("\n-----------------------------\n");
    printf("E:");

    for ( int j = 1; j <= vocales[e]; j++ ) {
        printf( "%c ", '*' );
    }
    printf("[%d]",vocales[e]);
    printf("\n-----------------------------\n");
    printf("I:");

    for ( int j = 1; j <= vocales[x]; j++ ) {
        printf( "%c ", '*' );
    }
    printf("[%d]",vocales[x]);
    printf("\n-----------------------------\n");
    printf("O:");

    for ( int j = 1; j <= vocales[o]; j++ ) {
        printf( "%c ", '*' );
    }
    printf("[%d]",vocales[o]);
    printf("\n-----------------------------\n");
    printf("U:");

    for ( int j = 1; j <= vocales[u]; j++ ) {
        printf( "%c ", '*' );
    }
    printf("[%d]",vocales[u]);
    printf("\n-----------------------------\n");

    return 0;
}
void contar(char texto[100], int vocales[5])
{
    for(int i=0;texto[i] !='\0' && texto[i] !='\n';i++){
        switch(texto[i]){
            case 'a': case 'A':
                vocales[a]++;
                break;
            case 'e': case 'E':
                vocales[e]++; break;
            case 'i': case 'I':
                vocales[x]++; break;
            case 'o': case 'O':
                vocales[o]++; break;
            case 'u': case 'U':
                vocales[u]++; break;
        }
    }
}
