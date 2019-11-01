#include <stdio.h>
#include <string.h>
#include "palindrome.h"


int main(void) {
    char palabra[80], inversa[80];
    int result, numc;
    printf("Escribe tu palabra y te dir%c si es un pal%cndromo: ", 130, 161);
    scanf("%s", &palabra);
    numc = strlen(palabra);
    if (EsPalindrome(palabra, inversa, numc) == 1) {
        printf("\nLa palabra %s es pal%cndromo\n", palabra, 161);
    } else {
        printf("\nLo siento, la palabra %s no es pal%cndromo\n", palabra, 161);
    }

}