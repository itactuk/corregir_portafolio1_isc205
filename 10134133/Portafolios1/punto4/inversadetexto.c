//
// Created by sebastian on 10/12/2019.
//

#include <stdio.h>
#define ESPACIO '\n'
void inverso(void);
int main() {
    printf("------------------------\n");
    printf("Inversa de una linea!\n");
    printf("------------------------\n");
    printf("Digite una linea de texto:\n");
    inverso();

}

void inverso(void) {

    char c;
    if ((c = getchar()) != ESPACIO)
        inverso();
    putchar(c); //en este caso se pudo haber usado un printf
    return ;
}