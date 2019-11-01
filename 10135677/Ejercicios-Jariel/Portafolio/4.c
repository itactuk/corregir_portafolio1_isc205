#include <stdio.h>
#include <string.h>

void invertir(char frase[50],int tamano);

int main(void){
   char frase[50];
   printf("Digite la frase:\n");
   gets(frase);
   int tamano = strlen(frase);
   invertir(frase,tamano-1);
}
void invertir(char frase[50],int tamano){
   if(tamano<0){
      return;
   }else{
      printf("%c",frase[tamano]);
      invertir(frase,tamano-1);
   }
}

