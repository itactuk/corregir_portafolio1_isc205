#include <stdio.h>
#include <stdlib.h>

int cant;
void esPrimo(int n);

int main(void){
   int n=1;

   printf("Cu%cntos n%cmeros primos quiere ver?\n",160,163);
   scanf("%d",&cant);
   if(cant==1){
      printf("\nEL primer n%cmeros primo es:\n",163);
   }
   else{
      printf("\nLos primeros %d n%cmeros primos son:\n",cant,163);
   }
   while(cant>0){
      esPrimo(n);
      n++;
   }
   return 0;
}

void esPrimo(int n){
   int cant_div=0;
   for(int div=1;div<=n;div++){
      if(n%div==0){
         cant_div++;
      }
   }
   if(cant_div==2){
      printf("%d\n",n);
      cant--;
   }
}
