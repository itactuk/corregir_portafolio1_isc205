#include <stdio.h>
#include <string.h>

void invertir_frase(char frase[1000],int tamano);

int main(void){
   char frase[1000];
   printf("Digite la frase:\n");
   gets(frase);
   int tamano = strlen(frase);
   invertir_frase(frase,tamano-1);
}
void invertir_frase(char frase[1000],int tamano){
   if(tamano<0){
      return;
   }else{
      printf("%c",frase[tamano]);
      invertir_frase(frase,tamano-1);
   }
}

