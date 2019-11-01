#include "stdlib.h"
#include "stdio.h"

int valor_aprox_f(int num1, int num2, int res, int contd)
{
    if (res < num2)
        res = (2*num1)+3;
        if (res == num2) {
            return contd;
        }else if(res>num2) {
                return -1;
        }else valor_aprox_f(num1 = res,num2,res,contd +1);
}

int valor_aprox_g(int num1, int num2, int res, int contd)
{
    if (res < num2)
        res = (3*num1)+2;
    if (res == num2) {
        return contd;
    }else if(res>num2) {
        return -1;
    }else valor_aprox_g(num1 = res,num2,res,contd +1);
}

int main()
{
    int pnum, numcomp, result = 0, count = 1, prt1, prt2, des;
    printf("introduzca el primer numero:  ");
    scanf("%d", &pnum);
    printf("introduzca el segundo numero:  ");
    scanf("%d", &numcomp);
    printf("\n");
    system("cls");
    prt1 = valor_aprox_f(pnum,numcomp,result,count);
    printf("funcion f(x) %d",prt1);
    printf("\n");
    prt2 = valor_aprox_g(pnum,numcomp,result,count);
    printf("funcion g(x) %d",prt2);

    return 0;
}
