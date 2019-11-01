#include <stdlib.h>
#include <stdio.h>
#include "voltmatriz.h"
int main()
{
    int num1 [3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int aux [3][3];
    int cant = 3,inic = 1, res;
    res = voltear_matriz(num1,aux,cant,cant,cant,inic,inic,inic);
    for (int i = 0; i<cant; i++)
        for (int j = 0; j<cant; i++)
            printf("%d",res);
}
