#include <stdio.h>

void inverso_arreglo(int arr[], int i, int tam);
void imprimir(int arr[],int tam);

int main(void){
    int i=0;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(arr)/sizeof(arr[0]);

    imprimir(arr,tam);
    inverso_arreglo(arr,i,tam-1);
    printf("\n");
    imprimir(arr,tam);
    printf("\n");

}
void inverso_arreglo(int arr[], int i, int tam){
    int tmp;
    if(i<tam || i==(tam-1)){
        tmp=arr[tam];
        arr[tam]=arr[i];
        arr[i]=tmp;
        inverso_arreglo(arr,i+1,tam-1);
    }
    if(i==tam){
        return;
    }
}
void imprimir(int arr[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d ",arr[i]);
    }
}
