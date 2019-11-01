#include "minunit.h"
#include "Funcion.h"
#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int x,x2;
    x = 4;
    x2 = 65;
    mu_assert_int_eq(3, numeroigual(x,x2));
}


MU_TEST(test_NombrePrueba2) {
    int x,x2;
    x = 2;
    x2 = 257;
    mu_assert_int_eq(5, numeroigual(x,x2));
}

MU_TEST(test_NombrePrueba3) {
    int x,x2;
    x = 3;
    x2 = 223;
    mu_assert_int_eq(-1, numeroigual(x,x2));
}

MU_TEST(test_NombrePrueba4) {
    int x,x2;
    x = 56;
    x2 = 23;
    mu_assert_int_eq(-1, numeroigual(x,x2));
}

MU_TEST(test_NombrePrueba5) {
    int x,x2;
    x = 32;
    x2 = 32;
    mu_assert_int_eq(0, numeroigual(x,x2));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
    MU_RUN_TEST(test_NombrePrueba4);
    MU_RUN_TEST(test_NombrePrueba5);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}