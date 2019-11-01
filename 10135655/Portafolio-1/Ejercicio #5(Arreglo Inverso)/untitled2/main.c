#include "minunit.h"

#include "inverso.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba)
{
        int arreglo[5] = {12,33,455,645,452};
        inversa(arreglo,0,4);
        mu_assert_int_eq(arreglo[0], 452);
        mu_assert_int_eq(arreglo[1], 645);
        mu_assert_int_eq(arreglo[2], 455);
        mu_assert_int_eq(arreglo[3], 33);
        mu_assert_int_eq(arreglo[4], 12);
}

MU_TEST(test_NombrePrueba2)
{
    int arreglo[9] = {1,33,121,78,566,124,455,5,2};
    inversa(arreglo,0,8);
    mu_assert_int_eq(arreglo[0], 2);
    mu_assert_int_eq(arreglo[1], 5);
    mu_assert_int_eq(arreglo[2], 455);
    mu_assert_int_eq(arreglo[3], 124);
    mu_assert_int_eq(arreglo[4], 566);
    mu_assert_int_eq(arreglo[5], 78);
    mu_assert_int_eq(arreglo[6], 121);
    mu_assert_int_eq(arreglo[7], 33);
    mu_assert_int_eq(arreglo[8], 1);
}

MU_TEST(test_NombrePrueba3)
{
    int arreglo[7] = {14,330,55,12,43,65,42};
    inversa(arreglo,0,6);
    mu_assert_int_eq(arreglo[0], 42);
    mu_assert_int_eq(arreglo[1], 65);
    mu_assert_int_eq(arreglo[2], 43);
    mu_assert_int_eq(arreglo[3], 12);
    mu_assert_int_eq(arreglo[4], 55);
    mu_assert_int_eq(arreglo[5], 330);
    mu_assert_int_eq(arreglo[6], 14);
}

MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(test_NombrePrueba);
        MU_RUN_TEST(test_NombrePrueba2);
        MU_RUN_TEST(test_NombrePrueba3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}