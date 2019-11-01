#include <stdio.h>
#include <time.h>

int main(){

    int inicio, fin, de;
    inicio = clock();

    //Aca el codigo con BubbleSort

    fin = clock();
    double tiempo = ((fin-inicio)/CLOCKS_PER_SEC);
    printf("\n\nTiempo de ejecucion %.2f", tiempo);

    return 0;
}
