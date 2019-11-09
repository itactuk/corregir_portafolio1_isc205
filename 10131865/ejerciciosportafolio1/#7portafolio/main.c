#include <stdio.h>
#define MAX_SIZE 100


int sum(int arr[], int start, int tam);


int main()
{
    int arr[MAX_SIZE];
    int N, i, sumarray;



    printf("Digite el tamano del arreglo: ");
    scanf("%d", &N);
    printf("Digite los elementos del arreglo: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }


    sumarray = sum(arr, 0, N);
    printf("La suma de los elementos es: %d", sumarray);

    return 0;
}



int sum(int arr[], int start, int tam)
{
    if(start >= tam)
        return 0;

    return (arr[start] + sum(arr, start + 1, tam));
}
