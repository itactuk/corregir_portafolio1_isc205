#include <stdio.h>
#include <stdlib.h>

int cant;
void esPrimo(int n);

int main(){

   int n=1;
   printf("%cCuantos numeros primos desea ver desde la unidad? ",168);
   scanf("%d",&cant);

   if(cant==1){
      printf("\nEL primer n%cmeros primo es:\n",163);
   }

   else{
      printf("\nLos primeros %d n%cmeros primos son:",cant,163);

   }while(cant>0){
      esPrimo(n);
      n++;
    }

   return 0;
}

void esPrimo(int n){
   int cant_div=0;
   for(int i=1;i<=n;i++){
      if(n%i==0){
         cant_div++;
      }
   }
   if(cant_div==2){
      printf(" %d",n);
      cant--;
   }
}
