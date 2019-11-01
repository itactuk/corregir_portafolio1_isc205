#include <stdio.h>
#include <stdarg.h>

double maximo(double numero, ...){
    double maximo=0, num;
    va_list valor;
    va_start(valor,numero);
    for (int i=0;i<numero;i++){
        num=va_arg(valor,int);
        if (num > maximo){
            maximo = num;
        }
    }
    va_end(valor);
    return maximo;
}

int main(void){
    printf("el valor maximo es = %.2f\n",maximo(3,1,5,7));
}
