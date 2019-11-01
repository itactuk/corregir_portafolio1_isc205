#include "minunit.h"
#include "Funcion.h"

#define MINUNIT_EPSILON 1E-12

enum{filas = 1,columnas = 2,};

MU_TEST(test_NombrePrueba)
{
        int x[][10] = {{1,2,3},{1,2,3},{1,2,3}};
        int i,j,c;
        i = 3; j = 3;c = 0;
        invertir(filas,x,i,j,c);

        mu_assert_int_eq(3, x[0][0]);
        mu_assert_int_eq(2, x[0][1]);
        mu_assert_int_eq(1, x[0][2]);
        mu_assert_int_eq(3, x[1][0]);
        mu_assert_int_eq(2, x[1][1]);
        mu_assert_int_eq(1, x[1][2]);
        mu_assert_int_eq(3, x[2][0]);
        mu_assert_int_eq(2, x[2][1]);
        mu_assert_int_eq(1, x[2][2]);
}

MU_TEST(test_NombrePrueba2)
{
    int x[][10] = {{3,7,5,9},{8,4,2,1},{3,5,8,4},{1,3,6,5}};
    int i,j,c;
    i = 4;j = 4;c = 0;
    invertir(filas,x,i,j,c);

    mu_assert_int_eq(9, x[0][0]);
    mu_assert_int_eq(5, x[0][1]);
    mu_assert_int_eq(7, x[0][2]);
    mu_assert_int_eq(3, x[0][3]);
    mu_assert_int_eq(1, x[1][0]);
    mu_assert_int_eq(2, x[1][1]);
    mu_assert_int_eq(4, x[1][2]);
    mu_assert_int_eq(8, x[1][3]);
    mu_assert_int_eq(4, x[2][0]);
    mu_assert_int_eq(8, x[2][1]);
    mu_assert_int_eq(5, x[2][2]);
    mu_assert_int_eq(3, x[2][3]);
    mu_assert_int_eq(5, x[3][0]);
    mu_assert_int_eq(6, x[3][1]);
    mu_assert_int_eq(3, x[3][2]);
    mu_assert_int_eq(1, x[3][3]);
}

MU_TEST(test_NombrePrueba3)
{
    int x[][10] = {{31,73,54,97,10},{88,43,42,15,23},{32,57,68,48,45},{14,35,67,58,56}};
    int i,j,c;
    i = 4;j = 5;c = 0;
    invertir(filas,x,i,j,c);

    mu_assert_int_eq(10, x[0][0]);
    mu_assert_int_eq(97, x[0][1]);
    mu_assert_int_eq(54, x[0][2]);
    mu_assert_int_eq(73, x[0][3]);
    mu_assert_int_eq(31, x[0][4]);
    mu_assert_int_eq(23, x[1][0]);
    mu_assert_int_eq(15, x[1][1]);
    mu_assert_int_eq(42, x[1][2]);
    mu_assert_int_eq(43, x[1][3]);
    mu_assert_int_eq(88, x[1][4]);
    mu_assert_int_eq(45, x[2][0]);
    mu_assert_int_eq(48, x[2][1]);
    mu_assert_int_eq(68, x[2][2]);
    mu_assert_int_eq(57, x[2][3]);
    mu_assert_int_eq(32, x[2][4]);
    mu_assert_int_eq(56, x[3][0]);
    mu_assert_int_eq(58, x[3][1]);
    mu_assert_int_eq(67, x[3][2]);
    mu_assert_int_eq(35, x[3][3]);
    mu_assert_int_eq(14, x[3][4]);
}

MU_TEST(test_NombrePrueba4)
{
    int x[][10] = {{1,2,3},{2,1,3},{3,2,1}};
    int i,j,c;
    i = 3; j = 3;c = 0;
    invertir(columnas,x,i,j,c);

    mu_assert_int_eq(3, x[0][0]);
    mu_assert_int_eq(2, x[0][1]);
    mu_assert_int_eq(1, x[0][2]);
    mu_assert_int_eq(2, x[1][0]);
    mu_assert_int_eq(1, x[1][1]);
    mu_assert_int_eq(3, x[1][2]);
    mu_assert_int_eq(1, x[2][0]);
    mu_assert_int_eq(2, x[2][1]);
    mu_assert_int_eq(3, x[2][2]);
}

MU_TEST(test_NombrePrueba5)
{
    int x[][10] = {{3,7,5,9},{8,4,2,1},{3,5,8,4},{1,3,6,5}};
    int i,j,c;
    i = 4;j = 4;c = 0;
    invertir(columnas,x,i,j,c);

    mu_assert_int_eq(1, x[0][0]);
    mu_assert_int_eq(3, x[0][1]);
    mu_assert_int_eq(6, x[0][2]);
    mu_assert_int_eq(5, x[0][3]);
    mu_assert_int_eq(3, x[1][0]);
    mu_assert_int_eq(5, x[1][1]);
    mu_assert_int_eq(8, x[1][2]);
    mu_assert_int_eq(4, x[1][3]);
    mu_assert_int_eq(8, x[2][0]);
    mu_assert_int_eq(4, x[2][1]);
    mu_assert_int_eq(2, x[2][2]);
    mu_assert_int_eq(1, x[2][3]);
    mu_assert_int_eq(3, x[3][0]);
    mu_assert_int_eq(7, x[3][1]);
    mu_assert_int_eq(5, x[3][2]);
    mu_assert_int_eq(9, x[3][3]);
}

MU_TEST(test_NombrePrueba6)
{
        int x[][10] = {{31,73,54,97,10},{88,43,42,15,23},{32,57,68,48,45},{14,35,67,58,56}};
        int i,j,c;
        i = 4;j = 5;c = 0;
        invertir(columnas,x,i,j,c);

        mu_assert_int_eq(14, x[0][0]);
        mu_assert_int_eq(35, x[0][1]);
        mu_assert_int_eq(67, x[0][2]);
        mu_assert_int_eq(58, x[0][3]);
        mu_assert_int_eq(56, x[0][4]);
        mu_assert_int_eq(32, x[1][0]);
        mu_assert_int_eq(57, x[1][1]);
        mu_assert_int_eq(68, x[1][2]);
        mu_assert_int_eq(48, x[1][3]);
        mu_assert_int_eq(45, x[1][4]);
        mu_assert_int_eq(88, x[2][0]);
        mu_assert_int_eq(43, x[2][1]);
        mu_assert_int_eq(42, x[2][2]);
        mu_assert_int_eq(15, x[2][3]);
        mu_assert_int_eq(23, x[2][4]);
        mu_assert_int_eq(31, x[3][0]);
        mu_assert_int_eq(73, x[3][1]);
        mu_assert_int_eq(54, x[3][2]);
        mu_assert_int_eq(97, x[3][3]);
        mu_assert_int_eq(10, x[3][4]);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
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