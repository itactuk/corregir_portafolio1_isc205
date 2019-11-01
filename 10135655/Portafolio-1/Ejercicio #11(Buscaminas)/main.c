//
// Created by diego on 9/10/2019.
//

#include "minunit.h"

#include "Buscaminas.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba1) {
    int x[100][100];
    int fil,col,cant,cont,i,j;
    fil = 5;
    col = 5;
    cant = 13;
    cont = 0;

    gbombas(x,fil,col,cant);

    for(i = 0;i < fil;i++)
    {
        for(j = 0;j < col;j++)
        {
            if(x[i][j] == 9)
                cont++;
        }
    }

    mu_assert_int_eq(cant, cont);
}

MU_TEST(test_NombrePrueba2) {
    int x[100][100];
    int fil, col, cant, cont, i, j;
    fil = 10;
    col = 10;
    cant = 63;
    cont = 0;

    gbombas(x, fil, col, cant);

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            if (x[i][j] == 9)
                cont++;
        }
    }

    mu_assert_int_eq(cant, cont);
}

MU_TEST(test_NombrePrueba3) {
    int x[100][100];
    int fil, col, cant, cont, i, j;
    fil = 6;
    col = 4;
    cant = 7;
    cont = 0;

    gbombas(x,fil, col, cant);

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            if (x[i][j] == 9)
                cont++;
        }
    }

    mu_assert_int_eq(cant, cont);
}

MU_TEST(test_NombrePrueba4) {
    int x[100][100] = {{9,1,1,1,1},{1,1,1,9,1},{1,1,1,1,1},{9,1,0,0,0,},{1,1,0,0,0}};
    int x2[100][100] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int fil, col, i, j;
    fil = 5;
    col = 5;
    i = 4;
    j = 3;

    abrir(x,x2,fil,col,i,j);

    mu_assert_int_eq(1, x2[2][1]);
    mu_assert_int_eq(1, x2[2][2]);
    mu_assert_int_eq(1, x2[2][3]);
    mu_assert_int_eq(1, x2[2][4]);
    mu_assert_int_eq(1, x2[3][1]);
    mu_assert_int_eq(0, x2[3][2]);
    mu_assert_int_eq(0, x2[3][3]);
    mu_assert_int_eq(0, x2[3][4]);
    mu_assert_int_eq(1, x2[4][1]);
    mu_assert_int_eq(0, x2[4][2]);
    mu_assert_int_eq(0, x2[4][3]);
    mu_assert_int_eq(0, x2[4][4]);
}

MU_TEST(test_NombrePrueba5) {
    int x[100][100] = {{9,1,0,1,9},{1,1,0,1,1},{0,0,0,0,0},{1,1,0,1,1,},{9,1,0,1,9}};
    int x2[100][100] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int fil, col, i, j;
    fil = 5;
    col = 5;
    i = 2;
    j = 0;

    abrir(x,x2,fil,col,i,j);

    mu_assert_int_eq(1, x2[0][1]);
    mu_assert_int_eq(0, x2[0][2]);
    mu_assert_int_eq(1, x2[0][3]);
    mu_assert_int_eq(1, x2[1][0]);
    mu_assert_int_eq(1, x2[1][1]);
    mu_assert_int_eq(0, x2[1][2]);
    mu_assert_int_eq(1, x2[1][3]);
    mu_assert_int_eq(1, x2[1][4]);
    mu_assert_int_eq(0, x2[2][0]);
    mu_assert_int_eq(0, x2[2][1]);
    mu_assert_int_eq(0, x2[2][2]);
    mu_assert_int_eq(0, x2[2][3]);
    mu_assert_int_eq(0, x2[2][4]);
    mu_assert_int_eq(1, x2[3][0]);
    mu_assert_int_eq(1, x2[3][1]);
    mu_assert_int_eq(0, x2[3][2]);
    mu_assert_int_eq(1, x2[3][3]);
    mu_assert_int_eq(1, x2[3][4]);
    mu_assert_int_eq(1, x2[4][1]);
    mu_assert_int_eq(0, x2[4][2]);
    mu_assert_int_eq(1, x2[4][3]);
}

MU_TEST(test_NombrePrueba6) {
    int x[100][100] = {{1,1,2,9,1,1,9},{1,9,2,1,1,1,1},{1,1,1,0,0,1,1},{1,1,0,0,0,1,9},{9,1,0,0,0,1,1},{1,1,0,0,0,1,1},{0,0,0,0,0,1,9}};
    int x2[100][100] = {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
    int fil, col, i, j;
    fil = 7;
    col = 7;
    i = 6;
    j = 0;

    abrir(x,x2,fil,col,i,j);

    mu_assert_int_eq(2, x2[1][2]);
    mu_assert_int_eq(1, x2[1][3]);
    mu_assert_int_eq(1, x2[1][4]);
    mu_assert_int_eq(1, x2[1][5]);
    mu_assert_int_eq(1, x2[2][1]);
    mu_assert_int_eq(1, x2[2][2]);
    mu_assert_int_eq(0, x2[2][3]);
    mu_assert_int_eq(0, x2[2][4]);
    mu_assert_int_eq(1, x2[2][5]);
    mu_assert_int_eq(1, x2[3][1]);
    mu_assert_int_eq(0, x2[3][2]);
    mu_assert_int_eq(0, x2[3][3]);
    mu_assert_int_eq(0, x2[3][4]);
    mu_assert_int_eq(1, x2[3][5]);
    mu_assert_int_eq(1, x2[4][1]);
    mu_assert_int_eq(0, x2[4][2]);
    mu_assert_int_eq(0, x2[4][3]);
    mu_assert_int_eq(0, x2[4][4]);
    mu_assert_int_eq(1, x2[4][5]);
    mu_assert_int_eq(1, x2[5][0]);
    mu_assert_int_eq(1, x2[5][1]);
    mu_assert_int_eq(0, x2[5][2]);
    mu_assert_int_eq(0, x2[5][3]);
    mu_assert_int_eq(0, x2[5][4]);
    mu_assert_int_eq(1, x2[5][5]);
    mu_assert_int_eq(0, x2[6][0]);
    mu_assert_int_eq(0, x2[6][1]);
    mu_assert_int_eq(0, x2[6][2]);
    mu_assert_int_eq(0, x2[6][3]);
    mu_assert_int_eq(0, x2[6][4]);
    mu_assert_int_eq(1, x2[6][5]);
}

MU_TEST_SUITE(test_suite){
    MU_RUN_TEST(test_NombrePrueba1);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
    MU_RUN_TEST(test_NombrePrueba4);
    MU_RUN_TEST(test_NombrePrueba5);
    MU_RUN_TEST(test_NombrePrueba6);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}


