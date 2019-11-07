//
// Created by sebastian on 10/15/2019.
//
#include <stdio.h>
#include <sys/time.h>

void bubblesort(int arreglo[],int n);

int main () {
struct timeval  tv1, tv2;
gettimeofday(&tv1, NULL);//esto da una advertencia, gettimeofday esta obsoleto y no se recomienda en nuevo codigo -5
int x[] = {14,52,34,67,844,34};//revisa el link para explicacion https://stackoverflow.com/questions/5248915/execution-time-of-c-program/41959179#41959179
int n,i;
n = 5;

bubblesort(x,n);

for (i = 0; i < n; i++)
    printf("%d ", x[i]);

gettimeofday(&tv2, NULL);

printf ("\nTotal time = %f seconds\n",
        (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
        (double) (tv2.tv_sec - tv1.tv_sec));

}
void bubblesort(int arreglo[],int n) {

    int swap;

    for (int i = 0 ; i < n - 1; i++)
    {
        for (int j = 0 ; j < n - i - 1; j++)
        {
            if (arreglo[j] > arreglo[j+1]) /* For decreasing order use < *///-20, al menos borra el comentario del creador original._.
            {                               //https://www.freecodecamp.org/forum/t/sorting-algorithms/297483 original
                swap       = arreglo[j];
                arreglo[j]   = arreglo[j+1];
                arreglo[j+1] = swap;
            }
        }
    }


}