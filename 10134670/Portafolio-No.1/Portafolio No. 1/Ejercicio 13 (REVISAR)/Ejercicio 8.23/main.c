#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "forganizar.h"

int main()

{
    int num;
    srand(time(NULL));
    printf("por favor introducir el numero de letras que desea :\n");
    scanf("%d",&num);
    organizar_letras(num);
}
