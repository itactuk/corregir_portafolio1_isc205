//5.	Realice un programa que capture un arreglo de valores enteros de tamaño N y los invierta
//      utilizando una función recursiva void inverso_arreglo(int[], int, int);

#include "Portafolio5.h"
#include "minunit.h"


#define MINUNIT_EPSILON 1E-12

MU_TEST(test_inverso1) {
    int c=2;
    int arreglo[2]={2,3};
    inverso_arreglo( arreglo, c);

    mu_assert_int_eq(3,arreglo[0]);
    mu_assert_int_eq(2,arreglo[1]);
}

MU_TEST(test_inverso2) {
    int c=2;
    int arreglo[2]={9,8};
    inverso_arreglo( arreglo,  c);

    mu_assert_int_eq(8,arreglo[0]);
    mu_assert_int_eq(9,arreglo[1]);

}
MU_TEST(test_inverso3) {
    int c=2;
    int arreglo[2]={1,4};
    inverso_arreglo( arreglo,  c);

    mu_assert_int_eq(4,arreglo[0]);
    mu_assert_int_eq(1,arreglo[1]);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_inverso1);
    MU_RUN_TEST(test_inverso2);
    MU_RUN_TEST(test_inverso3);

}

int main () {

    int cant;

    printf("Digite la cantidad de elementos del arreglo\n");
    scanf("%d",&cant);

    llenararreglo(cant);

    MU_RUN_SUITE(test_suite);
    MU_REPORT();


    return 0;
}


