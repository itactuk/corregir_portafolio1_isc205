#include <stdio.h>
#include <stdlib.h>

void inverso_arreglo(int arr[], int min, int max)
{
    int mid = 0;
    if (min >= max)
    {
        mid = arr[max];
        arr[max] = arr[min];
        arr[min] = mid;
        inverso_arreglo(arr,min+1,max-1);
    }
    if (min > max)
    {
        inverso_arreglo(arr,min+1,max-1);
    }
}