#include "minunit.h"
#include "SumaMatriz.h"
#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int arreglo[][15] ={{1,2,3},{4,5,6},{7,8,9}};
    int z,c,x,resultado;
    z = 3;
    c = 3;
    x = c;
    resultado = sumamatriz(arreglo,z,c,x);
    mu_assert_int_eq(45, resultado);
}

MU_TEST(test_NombrePrueba1) {
    int arreglo[][15] ={{3,7,4},{5,6,9},{1,2,8},{5,3,1}};
    int z,c,x,resultado;
    z = 4;
    c = 3;
    x = c;
    resultado = sumamatriz(arreglo,z,c,x);
    mu_assert_int_eq(54, resultado);
}

MU_TEST(test_NombrePrueba2) {
    int arreglo[][15] ={{12,32,34,56},{54,65,86,12},{17,38,69,44},{23,76,87,24},{23,43,67,87}};
    int z,c,x,resultado;
    z = 5;
    c = 4;
    x = c;
    resultado = sumamatriz(arreglo,z,c,x);
    mu_assert_int_eq(949, resultado);
}

MU_TEST(test_NombrePrueba3) {
    int arreglo[][15] ={{112,234},{467,589},{709,834},{345,667},{232,434},{343,678}};
    int z,c,x,resultado;
    z = 6;
    c = 2;
    x = c;
    resultado = sumamatriz(arreglo,z,c,x);
    mu_assert_int_eq(5644, resultado);
}

MU_TEST(test_NombrePrueba4) {
    int arreglo[][15] ={{112,212,335,567,1234},{443,5234,645,4633,2344},{734,800,934,4543,789},{123,434,565,8787,454},{2312,3423,4545,6767,877}};
    int z,c,x,resultado;
    z = 5;
    c = 5;
    x = c;
    resultado = sumamatriz(arreglo,z,c,x);
    mu_assert_int_eq(51846, resultado);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba1);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
    MU_RUN_TEST(test_NombrePrueba4);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}