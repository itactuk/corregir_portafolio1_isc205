//
// Created by natasha on 19/9/19.
//

#include <stdio.h>
#include "Binary_Search.h"
int Binary_Search(int array[],int n,int inf,int sup){

    if(sup >= inf){
        int pivot = inf + (sup - 1) /2;

        if(array[pivot] == n)
            return pivot;
        if(array[pivot] > n)
            return Binary_Search(array,n,inf,pivot-1);

        return Binary_Search(array,n,pivot + 1, sup);
    }

    return -1;
}

void Bubble_Sort(int array[], int n){

    int aux, i, j;

    for (i = 0; i < n-1; i++) {
       for(j=0; j< n-i-1; j++){
           if (array[j] > array[j + 1]) {
               aux = array[j];
               array[j] = array[j + 1];
               array[j + 1] = aux;
           }
       }
    }
}


