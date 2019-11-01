#include "minunit.h"
#include "primos.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba)
{
    int x = 4;
    int primos[x];
    esprimo(primos,x);
    mu_assert_int_eq(primos[0], 2);
    mu_assert_int_eq(primos[1], 3);
    mu_assert_int_eq(primos[2], 5);
    mu_assert_int_eq(primos[3], 7);
}

MU_TEST(NombrePrueba2)
{
    int x = 5;
    int primos[x];
    esprimo(primos,x);
    mu_assert_int_eq(primos[0], 2);
    mu_assert_int_eq(primos[1], 3);
    mu_assert_int_eq(primos[2], 5);
    mu_assert_int_eq(primos[3], 7);
    mu_assert_int_eq(primos[4], 11);
}

MU_TEST(OtraNombrePrueba3)
{
    int x = 30;
    int primos[x];
    esprimo(primos,x);
    mu_assert_int_eq(primos[7], 19);
    mu_assert_int_eq(primos[22], 83);
    mu_assert_int_eq(primos[4], 11);
    mu_assert_int_eq(primos[25], 101);
}

MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(test_NombrePrueba);
        MU_RUN_TEST(NombrePrueba2);
        MU_RUN_TEST(OtraNombrePrueba3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}