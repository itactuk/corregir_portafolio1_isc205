//
// Created by natasha on 19/9/19.
//

#include <minunit.h>

#include "Binary_Search.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int arr[] = {2,3,7,8};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 3, 0,n-1);
    mu_assert_int_eq(1, i);
}

MU_TEST(test_NombrePruebaNoEncontrado) {
    int arr[] = {2,3,7,8};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 4, 0,n-1);
    mu_assert_int_eq(-1, i);
}

MU_TEST(test_NombrePruebaUltimoNumero) {
    int arr[] = {2,3,7,8};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 8, 0,n-1);
    mu_assert_int_eq(3, i);
}

MU_TEST(test_NombrePruebaPrimerNumero) {
    int arr[] = {2,3,7,8};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 2, 0,n-1);
    mu_assert_int_eq(0, i);
}

MU_TEST(test_NombrePruebaMedioSup) {
    int arr[] = {2,3,7,8};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 7, 0,n-1);
    mu_assert_int_eq(2, i);
}

MU_TEST(test_NombrePruebaImparMedio) {
    int arr[] = {2,3,7,8,11};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 7, 0,n-1);
    mu_assert_int_eq(2, i);
}

MU_TEST(test_NombrePruebaDerecha) {
    int arr[] = {2,3,7,8,11};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 8, 0,n-1);
    mu_assert_int_eq(3, i);
}

MU_TEST(test_NombrePruebaIzq) {
    int arr[] = {2,3,7,8,11};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 3, 0,n-1);
    mu_assert_int_eq(1, i);
}

MU_TEST(test_NombrePruebaImparMenor) {
    int arr[] = {2,3,7,8,11};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 2, 0,n-1);
    mu_assert_int_eq(0, i);
}

MU_TEST(test_NombrePruebaImparMayor) {
    int arr[] = {2,3,7,8,11};
    int n = sizeof(arr)/ sizeof(int);
    int i = Binary_Search(arr, 11, 0,n-1);
    mu_assert_int_eq(4, i);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePruebaNoEncontrado);
    MU_RUN_TEST(test_NombrePruebaUltimoNumero);
    MU_RUN_TEST(test_NombrePruebaPrimerNumero);
    MU_RUN_TEST(test_NombrePruebaMedioSup);
    MU_RUN_TEST(test_NombrePruebaImparMedio);
    MU_RUN_TEST(test_NombrePruebaDerecha);
    MU_RUN_TEST(test_NombrePruebaIzq);
    MU_RUN_TEST(test_NombrePruebaImparMenor);
    MU_RUN_TEST(test_NombrePruebaImparMayor);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}