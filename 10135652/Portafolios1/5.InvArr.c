#include <stdio.h>

void imp_arr();
int inv_arr();

int main(){

    int arr[] = {5,4,3,7,8,9,6};
    printf("El arreglo es: ");
    imp_arr(arr);
    printf("\n\nEl arreglo invertido es:");
    inv_arr(arr,6);

    return 0;
}

void imp_arr(int arr[]){
    int i;
    for(i=0;i<=6;i++)
        printf("%d", arr[i]);

}

int inv_arr(int arr[], int n){

    if(n>=0){
        printf("%d", arr[n]);
        inv_arr(arr,n-1);
    }
}
