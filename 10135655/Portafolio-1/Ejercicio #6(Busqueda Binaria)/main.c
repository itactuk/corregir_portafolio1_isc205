#include "minunit.h"

#include "BusquedaBinaria.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int arreglo[] = {1,2,3,5,7};
    int c,z,y;
    c = 4;
    z = 0;
    y = 4;
        mu_assert_int_eq(-1, bbinaria(arreglo,z,y,c));
}

MU_TEST(test_NombrePrueba1) {
    int arreglo[] = {2,6,9,12,18,25};
    int c,z,y;
    c = 14;
    z = 0;
    y = 5;
    mu_assert_int_eq(-1, bbinaria(arreglo,z,y,c));
}

MU_TEST(test_NombrePrueba2) {
    int arreglo[] = {123,645,912,1433,3889,4095,6273};
    int c,z,y;
    c = 645;
    z = 0;
    y = 6;
    mu_assert_int_eq(1, bbinaria(arreglo,z,y,c));
}

MU_TEST(test_NombrePrueba3) {
    int arreglo[] = {12,64,143,388,409,627,723,876};
    int c,z,y;
    c = 388;
    z = 0;
    y = 7;
    mu_assert_int_eq(3, bbinaria(arreglo,z,y,c));
}


MU_TEST_SUITE(test_suite)
{
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba1);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}