//
// Created by diego on 2/10/2019.
//

#include "minunit.h"
#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

/*Estos se encargan de probar la funcion iniciar2*/
MU_TEST(Jugador_1_Iniciar_Prueba_1) {
    int x = 0;
    char a[3][20] = {{"Diego"},{"chinola"},{"PARALELEPIPEDO"}};
    char b[20];
    iniciar2(b,a,x);
    mu_assert_int_eq('_', b[0]);
    mu_assert_int_eq('_', b[1]);
    mu_assert_int_eq('_', b[2]);
    mu_assert_int_eq('_', b[3]);
    mu_assert_int_eq('_', b[4]);
}

MU_TEST(Jugador_1_Iniciar_Prueba_2) {
    int x = 1;
    char a[3][20] = {{"Diego"},{"chinola"},{"PARALELEPIPEDO"}};
    char b[20];
    iniciar2(b,a,x);
    mu_assert_int_eq('_', b[0]);
    mu_assert_int_eq('_', b[1]);
    mu_assert_int_eq('_', b[2]);
    mu_assert_int_eq('_', b[3]);
    mu_assert_int_eq('_', b[4]);
    mu_assert_int_eq('_', b[5]);
    mu_assert_int_eq('_', b[6]);
}

MU_TEST(Jugador_1_Iniciar_Prueba_3) {
    int x = 2;
    char a[3][20] = {{"Diego"},{"chinola"},{"PARALELEPIPEDO"}};
    char b[20];
    iniciar2(b,a,x);
    mu_assert_int_eq('_', b[0]);
    mu_assert_int_eq('_', b[1]);
    mu_assert_int_eq('_', b[2]);
    mu_assert_int_eq('_', b[3]);
    mu_assert_int_eq('_', b[4]);
    mu_assert_int_eq('_', b[5]);
    mu_assert_int_eq('_', b[6]);
    mu_assert_int_eq('_', b[7]);
    mu_assert_int_eq('_', b[8]);
    mu_assert_int_eq('_', b[9]);
    mu_assert_int_eq('_', b[10]);
    mu_assert_int_eq('_', b[11]);
    mu_assert_int_eq('_', b[12]);
    mu_assert_int_eq('_', b[13]);
}

/*Estos se encargan de probar la funcion iniciar*/

MU_TEST(Jugador_2_Iniciar_Prueba_1) {
    char a[20] = {"Diego"};
    char b[20];
    iniciar(b,a);
    mu_assert_int_eq('_', b[0]);
    mu_assert_int_eq('_', b[1]);
    mu_assert_int_eq('_', b[2]);
    mu_assert_int_eq('_', b[3]);
    mu_assert_int_eq('_', b[4]);
}

MU_TEST(Jugador_2_Iniciar_Prueba_2) {
    char a[20] = {"chinola"};
    char b[20];
    iniciar(b,a);
    mu_assert_int_eq('_', b[0]);
    mu_assert_int_eq('_', b[1]);
    mu_assert_int_eq('_', b[2]);
    mu_assert_int_eq('_', b[3]);
    mu_assert_int_eq('_', b[4]);
    mu_assert_int_eq('_', b[5]);
    mu_assert_int_eq('_', b[6]);
}

MU_TEST(Jugador_2_Iniciar_Prueba_3) {
    char a[20] = {"PARALELEPIPEDO"};
    char b[20];
    iniciar(b,a);
    mu_assert_int_eq('_', b[0]);
    mu_assert_int_eq('_', b[1]);
    mu_assert_int_eq('_', b[2]);
    mu_assert_int_eq('_', b[3]);
    mu_assert_int_eq('_', b[4]);
    mu_assert_int_eq('_', b[5]);
    mu_assert_int_eq('_', b[6]);
    mu_assert_int_eq('_', b[7]);
    mu_assert_int_eq('_', b[8]);
    mu_assert_int_eq('_', b[9]);
    mu_assert_int_eq('_', b[10]);
    mu_assert_int_eq('_', b[11]);
    mu_assert_int_eq('_', b[12]);
    mu_assert_int_eq('_', b[13]);
}

/*Estos se encargan de probar la funcion adivinar_palabra2*/

MU_TEST(Jugador_1_Letras_Prueba_1) {
    char letra = 'D';
    int vida,x;
    vida = 5;
    x = 0;
    char a[5][20] = {{"DIEGO"},{"PROGRAMAR"},{"CANTAR"},{"TRAPECIO"},{"SUPERMAN"}};
    char b[20] = {'_','_','_','_','_'};
    vida = adivinar_palabra2(a,b,vida,letra,x);
    mu_assert_int_eq(5, vida);
    mu_assert_int_eq('D', b[0]);
}

MU_TEST(Jugador_1_Letras_Prueba_2) {
    char letra = 'A';
    int vida,x;
    vida = 5;
    x = 1;
    char a[5][20] = {{"DIEGO"},{"PROGRAMAR"},{"CANTAR"},{"TRAPECIO"},{"SUPERMAN"}};
    char b[20] = {'_','_','_','_','_','_','_','_','_'};
    vida = adivinar_palabra2(a,b,vida,letra,x);
    mu_assert_int_eq(5, vida);
    mu_assert_int_eq('A', b[5]);
    mu_assert_int_eq('A', b[7]);
}

MU_TEST(Jugador_1_Letras_Prueba_3) {
    char letra = 'z';
    int vida,x;
    vida = 5;
    x = 2;
    char a[5][20] = {{"DIEGO"},{"PROGRAMAR"},{"CANTAR"},{"TRAPECIO"},{"SUPERMAN"}};
    char b[20] = {'_','_','_','_','_','_'};
    vida = adivinar_palabra2(a,b,vida,letra,x);
    mu_assert_int_eq(4, vida);
}

MU_TEST(Jugador_1_Letras_Prueba_4) {
    char letra = 'N';
    int vida,x;
    vida = 4;
    x = 3;
    char a[5][20] = {{"DIEGO"},{"PROGRAMAR"},{"CANTAR"},{"TRAPECIO"},{"SUPERMAN"}};
    char b[20] = {'_','_','_','_','_','_','_','_'};
    vida = adivinar_palabra2(a,b,vida,letra,x);
    mu_assert_int_eq(3, vida);
}

MU_TEST(Jugador_1_Letras_Prueba_5) {
    char letra = 'e';
    int vida,x;
    vida = 4;
    x = 4;
    char a[5][20] = {{"DIEGO"},{"PROGRAMAR"},{"CANTAR"},{"TRAPECIO"},{"EeEEee"}};
    char b[20] = {'_','_','_','_','_','_'};
    vida = adivinar_palabra2(a,b,vida,letra,x);
    mu_assert_int_eq(4, vida);
    mu_assert_int_eq('E', b[0]);
    mu_assert_int_eq('E', b[1]);
    mu_assert_int_eq('E', b[2]);
    mu_assert_int_eq('E', b[3]);
    mu_assert_int_eq('E', b[4]);
    mu_assert_int_eq('E', b[5]);
}

/*Estos se encargan de probar la funcion adivinar_palabra*/

MU_TEST(Jugador_2_Letras_Prueba_1) {
    char letra = 'd';
    int vida = 5;
    char a[20] = {'D','I','E','G','O'};
    char b[20] = {'_','_','_','_','_'};
    adivinar_palabra(a,b,vida,letra);
    mu_assert_int_eq(5, vida);
    mu_assert_int_eq('D', b[0]);
}

MU_TEST(Jugador_2_Letras_Prueba_2) {
    char letra = 'E';
    int vida = 5;
    char a[20] = {'V','E','N','E','Z','U','E','L','A'};
    char b[20] = {'_','_','_','_','_','_','_','_','_'};
    vida = adivinar_palabra(a,b,vida,letra);
    mu_assert_int_eq(5, vida);
    mu_assert_int_eq('E', b[1]);
    mu_assert_int_eq('E', b[3]);
    mu_assert_int_eq('E', b[6]);
}

MU_TEST(Jugador_2_Letras_Prueba_3) {
    char letra = 'p';
    int vida = 5;
    char a[20] = {'D','O','M','I','N','I','C','A','N','A'};
    char b[20] = {'_','_','_','_','_','_','_','_','_'};
    vida = adivinar_palabra(a,b,vida,letra);
    mu_assert_int_eq(4, vida);
}

MU_TEST(Jugador_2_Letras_Prueba_4) {
    char letra = 'A';
    int vida = 4;
    char a[20] = {'P','E','R','R','O'};
    char b[20] = {'_','_','_','_','_','_','_','_','_'};
    vida = adivinar_palabra(a,b,vida,letra);
    mu_assert_int_eq(3, vida);
}

MU_TEST(Jugador_2_Letras_Prueba_5) {
    char letra = 'A';
    int vida = 4;
    char a[20] = {'A','a','A','a','A'};
    char b[20] = {'_','_','_','_','_'};
    vida = adivinar_palabra(a,b,vida,letra);
    mu_assert_int_eq(4, vida);
    mu_assert_int_eq('A', b[0]);
    mu_assert_int_eq('A', b[1]);
    mu_assert_int_eq('A', b[2]);
    mu_assert_int_eq('A', b[3]);
    mu_assert_int_eq('A', b[4]);
}


/*Estos se encargan de probar la funcion comparacion2*/

MU_TEST(Jugador_1_Comparacion_Prueba_1) {
    int x;
    char a[5][20] = {{"DIEGO"},{"CHILE"},{"DOMINICANA"},{"PARALELEPIPE"},{"ROMBOIDE"}};
    x = 0;
    char b[20] = {'D','I','E','G','O'};
    mu_assert_int_eq(1, comparacion2(a,b,x));
}
MU_TEST(Jugador_1_Comparacion_Prueba_2) {
    int x;
    char a[5][20] = {{"DIEGO"},{"CHILE"},{"DOMINICANA"},{"PARALELEPIPEDO"},{"ROMBOIDE"}};
    x = 1;
    char b[20] = {'C','_','I','_','E'};
    mu_assert_int_eq(0, comparacion2(a,b,x));
}

MU_TEST(Jugador_1_Comparacion_Prueba_3) {
    int x;
    char a[5][20] = {{"DIEGO"},{"CHILE"},{"DOMINICANA"},{"PARALELEPIPEDO"},{"ROMBOIDE"}};
    x = 2;
    char b[20] = {'D','o','M','i','N','i','C','a','N','a'};
    mu_assert_int_eq(1, comparacion2(a,b,x));
}

MU_TEST(Jugador_1_Comparacion_Prueba_4) {
    int x;
    char a[5][20] = {{"DIEGO"},{"CHILE"},{"DOMINICANA"},{"PARALELEPIPEDO"},{"ROMBOIDE"}};
    x = 3;
    char b[20] = {'P','_','R','_','_','_','L','E','P','I','_','E','D','O'};
    mu_assert_int_eq(0, comparacion2(a,b,x));
}

MU_TEST(Jugador_1_Comparacion_Prueba_5) {
    int x;
    char a[5][20] = {{"DIEGO"},{"CHILE"},{"DOMINICANA"},{"PARALELEPIPE"},{"ROMBOIDE"}};
    x = 4;
    char b[20] = {'R','_','M','_','O','I','_','_'};
    mu_assert_int_eq(0, comparacion2(a,b,x));
}

/*Estos se encargan de probar la funcion comparacion*/

MU_TEST(Jugador_2_Comparacion_Prueba_1) {
    char a[20] = {'D','I','E','G','O'};
    char b[20] = {'D','I','E','G','O'};
    mu_assert_int_eq(1, comparacion(a,b));
}
MU_TEST(Jugador_2_Comparacion_Prueba_2) {
    char a[20] = {'D','I','E','G','O'};
    char b[20] = {'D','_','E','_','O'};
    mu_assert_int_eq(0, comparacion(a,b));
}

MU_TEST(Jugador_2_Comparacion_Prueba_3) {
    char a[20] = {'P','A','R','A','L','E','L','E','P','I','P','E','D','O'};
    char b[20] = {'P','a','R','a','L','e','L','e','p','I','P','E','D','o'};
    mu_assert_int_eq(1, comparacion(a,b));
}

MU_TEST(Jugador_2_Comparacion_Prueba_4) {
    char a[20] = {'P','A','R','A','L','E','L','E','P','I','P','E','D','O'};
    char b[20] = {'P','_','R','_','_','_','L','E','P','I','_','E','D','O'};
    mu_assert_int_eq(0, comparacion(a,b));
}

MU_TEST(Jugador_2_Comparacion_Prueba_5) {
    char a[20] = {'D','I','E','G','O'};
    char b[20] = {'D','_','E','_','O'};
    mu_assert_int_eq(0, comparacion(a,b));
}
MU_TEST_SUITE(test_suite) {
/*Estos se encargan de probar la funcion iniciar2*/
    MU_RUN_TEST(Jugador_1_Iniciar_Prueba_1);
    MU_RUN_TEST(Jugador_1_Iniciar_Prueba_2);
    MU_RUN_TEST(Jugador_1_Iniciar_Prueba_3);
/*Estos se encargan de probar la funcion iniciar*/
    MU_RUN_TEST(Jugador_2_Iniciar_Prueba_1);
    MU_RUN_TEST(Jugador_2_Iniciar_Prueba_2);
    MU_RUN_TEST(Jugador_2_Iniciar_Prueba_3);
/*Estos se encargan de probar la funcion adivinar_palabra2*/
    MU_RUN_TEST(Jugador_1_Letras_Prueba_1);
    MU_RUN_TEST(Jugador_1_Letras_Prueba_2);
    MU_RUN_TEST(Jugador_1_Letras_Prueba_3);
    MU_RUN_TEST(Jugador_1_Letras_Prueba_4);
    MU_RUN_TEST(Jugador_1_Letras_Prueba_5);
/*Estos se encargan de probar la funcion adivinar_palabra*/
    MU_RUN_TEST(Jugador_2_Letras_Prueba_1);
    MU_RUN_TEST(Jugador_2_Letras_Prueba_2);
    MU_RUN_TEST(Jugador_2_Letras_Prueba_3);
    MU_RUN_TEST(Jugador_2_Letras_Prueba_4);
    MU_RUN_TEST(Jugador_2_Letras_Prueba_5);
/*Estos se encargan de probar la funcion comparacion2*/
    MU_RUN_TEST(Jugador_1_Comparacion_Prueba_1);
    MU_RUN_TEST(Jugador_1_Comparacion_Prueba_2);
    MU_RUN_TEST(Jugador_1_Comparacion_Prueba_3);
    MU_RUN_TEST(Jugador_1_Comparacion_Prueba_4);
    MU_RUN_TEST(Jugador_1_Comparacion_Prueba_5);
/*Estos se encargan de probar la funcion comparacion*/
    MU_RUN_TEST(Jugador_2_Comparacion_Prueba_1);
    MU_RUN_TEST(Jugador_2_Comparacion_Prueba_2);
    MU_RUN_TEST(Jugador_2_Comparacion_Prueba_3);
    MU_RUN_TEST(Jugador_2_Comparacion_Prueba_4);
    MU_RUN_TEST(Jugador_2_Comparacion_Prueba_5);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}

