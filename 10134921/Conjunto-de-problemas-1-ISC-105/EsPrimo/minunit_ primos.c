//
// Created by RobDom01 on 11/9/2019.
//

#include "minunit.h"
#include "primos.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    mu_assert_int_eq(1, Es_Primo(5));
}

MU_TEST(test_NombrePrueba2) {
    mu_assert_int_eq(0, Es_Primo(4));
}

MU_TEST(test_NombrePrueba3) {
    mu_assert_int_eq(1, Es_Primo(17));
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
