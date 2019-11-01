#include "minunit.h"
#include "max.h"
#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
        mu_assert_int_eq(12, maxi(5,1,5,8,4,12));
}
MU_TEST(test_NombrePrueba2) {
    mu_assert_int_eq(50, maxi(5,6,11,50,36,1));
}

MU_TEST(test_NombrePrueba3) {
    mu_assert_int_eq(894, maxi(5,623,111,894,536,10));
}

MU_TEST(test_NombrePrueba4) {
    mu_assert_int_eq(9, maxi(9,1,2,3,4,5,6,7,8,9));
}
MU_TEST(test_NombrePrueba5) {
    mu_assert_int_eq(1344, maxi(6,92,45,534,356,1344,232));
}

MU_TEST(test_NombrePrueba6) {
    mu_assert_int_eq(55323, maxi(9,644,134,4324,55323,1233,2343,3252,233,2343));
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