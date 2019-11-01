#include "minunit.h"
#include "InsertionSort.h"
#include <stdio.h>
#include <sys/time.h>
#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    struct timeval  tv1, tv2;
    gettimeofday(&tv1, NULL);

    int arreglo[7] = {3,4,6,2,5,8,9};
    int num = 7;
    InsertionSort(arreglo,num);
    mu_assert_int_eq(2,arreglo[0]);
    mu_assert_int_eq(3,arreglo[1]);
    mu_assert_int_eq(4,arreglo[2]);
    mu_assert_int_eq(5,arreglo[3]);
    mu_assert_int_eq(6,arreglo[4]);
    mu_assert_int_eq(8,arreglo[5]);
    mu_assert_int_eq(9,arreglo[6]);

    gettimeofday(&tv2, NULL);

    printf ("Total time = %f seconds\n",
            (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
            (double) (tv2.tv_sec - tv1.tv_sec));
}

MU_TEST(test_NombrePrueba2) {
    struct timeval  tv1, tv2;
    gettimeofday(&tv1, NULL);

    int arreglo[9] = {12,2,56,34,46,1,99,134,67};
    int num = 9;
    InsertionSort(arreglo,num);
    mu_assert_int_eq(1,arreglo[0]);
    mu_assert_int_eq(2,arreglo[1]);
    mu_assert_int_eq(12,arreglo[2]);
    mu_assert_int_eq(34,arreglo[3]);
    mu_assert_int_eq(46,arreglo[4]);
    mu_assert_int_eq(56,arreglo[5]);
    mu_assert_int_eq(67,arreglo[6]);
    mu_assert_int_eq(99,arreglo[7]);
    mu_assert_int_eq(134,arreglo[8]);

    gettimeofday(&tv2, NULL);

    printf ("Total time = %f seconds\n",
            (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
            (double) (tv2.tv_sec - tv1.tv_sec));
}

MU_TEST(test_NombrePrueba3) {
    struct timeval  tv1, tv2;
    gettimeofday(&tv1, NULL);

    int arreglo[8] = {123,223,526,344,456,167,384,647};
    int num = 8;
    InsertionSort(arreglo,num);
    mu_assert_int_eq(123,arreglo[0]);
    mu_assert_int_eq(167,arreglo[1]);
    mu_assert_int_eq(223,arreglo[2]);
    mu_assert_int_eq(344,arreglo[3]);
    mu_assert_int_eq(384,arreglo[4]);
    mu_assert_int_eq(456,arreglo[5]);
    mu_assert_int_eq(526,arreglo[6]);
    mu_assert_int_eq(647,arreglo[7]);

    gettimeofday(&tv2, NULL);

    printf ("Total time = %f seconds\n",
            (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
            (double) (tv2.tv_sec - tv1.tv_sec));
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