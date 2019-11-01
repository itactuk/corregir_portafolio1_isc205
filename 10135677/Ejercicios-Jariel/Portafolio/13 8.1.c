#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convertir(char romano[100], int valor[100], int n);


int main(void){
    char romano[100];
    int valor[100];
    int n,numero;

    printf("Escribe el numero romano:  ");
    gets(romano);
    n=strlen(romano);

    numero= convertir(romano, valor, n);

	printf("\n%s en arabigo es: %d\n",romano,numero);
	return 0;
}
int convertir(char romano[100], int valor[100], int n){
    int numero=0;
    for(int i=0;i<n;i++){
        if(romano[i]=='I' || romano[i]=='i'){
            valor[i]=1;
        }
        if(romano[i]=='V' || romano[i]=='v'){
            valor[i]=5;
        }
        if(romano[i]=='X' || romano[i]=='x'){
            valor[i]=10;
        }
        if(romano[i]=='L' || romano[i]=='l'){
            valor[i]=50;
        }
        if(romano[i]=='C' || romano[i]=='c'){
            valor[i]=100;
        }
        if(romano[i]=='D' || romano[i]=='d'){
            valor[i]=500;
        }
        if(romano[i]=='M' || romano[i]=='m'){
            valor[i]=1000;
        }
    }
    for(int i=0;i<n;i++){
		if(i==n-1){
			numero+=valor[i];
		}
		else
		   if(romano[i]>=romano[i+1]){
			   numero+=valor[i];
		   }
		   else
			  numero-=valor[i];
	}
	return numero;
}
