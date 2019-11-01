//
// Created by admin on 11/10/2019.
//

#include "minunit.h"
#include <string.h>
#include "Palindrome.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Pal1) {
    char palabra[80] = {"ana"};
    char inversa[80];
    int x;
    x = strlen(palabra);


    mu_assert_int_eq(1, EsPalindrome(palabra,inversa,x));
}

MU_TEST(test_Pal2) {
    char palabra[80] = {"anilina"};
    char inversa[80];
    int x;
    x = strlen(palabra);


    mu_assert_int_eq(1, EsPalindrome(palabra,inversa,x));
}
MU_TEST(test_Pal3) {
    char palabra[80] = {"carro"};
    char inversa[80];
    int x;
    x = strlen(palabra);


    mu_assert_int_eq(0, EsPalindrome(palabra,inversa,x));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_Pal1);
    MU_RUN_TEST(test_Pal2);
    MU_RUN_TEST(test_Pal3);

}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}