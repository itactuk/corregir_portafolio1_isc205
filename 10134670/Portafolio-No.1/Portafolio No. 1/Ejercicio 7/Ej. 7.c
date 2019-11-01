#include <stdio.h>
#include <stdlib.h>

int sumaarr(int arr[][3], int limitv,int limith, int constant)
{
    if (limitv<1) return 0;
    if (limith==1) return arr[limitv - 1][limith - 1] + sumaarr(arr,limitv-1,limith = constant,constant);
    if (limith > 1) return arr[limitv-1][limith-1]+sumaarr(arr,limitv,limith-1,constant);
}

int main()
{
    int num1 [3][3] =
    {
        {10,10,10},
        {10,10,10},
        {10,10,10}
    };
    int cant = 3, res;
    res = sumaarr(num1, cant, cant,cant);
    printf("suma es : %d", res);
}
