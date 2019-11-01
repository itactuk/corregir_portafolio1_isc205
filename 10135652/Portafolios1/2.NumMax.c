#include <stdio.h>
#include <stdlib.h>

void imprimir_arr (double arr[5]){
    int i;
    printf("Estos son tus numeros: ");
    for (i=0;i<5;i++)
        printf("%f ", arr[i]);
}

double dev_max(double arr[5]){
    int i;
    double max=arr[0];
    for (i=0;i<5;i++)
        if(arr[i] > max)
            max = arr[i];

    return max;
}

int main(void){

    double arr[5]={12.151356,10.354546,5.298654,20.265354,6.221013};
    imprimir_arr(arr);

    printf("\n\nSu valor maximo es: %f", dev_max(arr));

}
