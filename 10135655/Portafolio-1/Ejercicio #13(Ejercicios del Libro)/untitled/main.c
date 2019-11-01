#include "minunit.h"
#include "Identificador_Valido.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
        char arreglo[50] = {"x2"};
        mu_assert_int_eq(1, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba2) {
    char arreglo[50] = {"4num"};
    mu_assert_int_eq(0, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba3) {
    char arreglo[50] = {"y2"};
    mu_assert_int_eq(1, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba4) {
    char arreglo[50] = {"suma_1"};
    mu_assert_int_eq(1, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba5) {
    char arreglo[50] = {"orden-no"};
    mu_assert_int_eq(0, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba6) {
    char arreglo[50] = {"_0"};
    mu_assert_int_eq(1, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba7) {
    char arreglo[50] = {"indice lis"};
    mu_assert_int_eq(0, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba8) {
    char arreglo[15] = {"TABLA"};
    mu_assert_int_eq(1, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba9) {
    char arreglo[15] = {"número"};
    mu_assert_int_eq(0, es_valido(arreglo));
}

MU_TEST(test_NombrePrueba10) {
    char arreglo[50] = {"n#mero"};
    mu_assert_int_eq(0, es_valido(arreglo));
}
MU_TEST(test_NombrePrueba11) {
    char arreglo[50] = {"este_es_un_nombre_muy_largo_312"};
    mu_assert_int_eq(1, longitud(arreglo));
}

MU_TEST(test_NombrePrueba12) {
    char arreglo[50] = {"indice_lista_longitud"};
    mu_assert_int_eq(1, longitud(arreglo));
}

MU_TEST(test_NombrePrueba13) {
    char arreglo[50] = {"TABLAAAAAAAA"};
    mu_assert_int_eq(1, longitud(arreglo));
}

MU_TEST(test_NombrePrueba14) {
    char arreglo[50] = {"numeroxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    mu_assert_int_eq(0, longitud(arreglo));
}

MU_TEST(test_NombrePrueba15) {
    char arreglo[50] = {"numero_especial"};
    mu_assert_int_eq(1, longitud(arreglo));
}

MU_TEST(test_NombrePrueba16) {
    char arreglo[50] = {"while"};
    mu_assert_int_eq(1, palabras_reservadas(arreglo));
}

MU_TEST(test_NombrePrueba17) {
    char arreglo[50] = {"sizeof"};
    mu_assert_int_eq(1, palabras_reservadas(arreglo));
}

MU_TEST(test_NombrePrueba18) {
    char arreglo[50] = {"int"};
    mu_assert_int_eq(1, palabras_reservadas(arreglo));
}

MU_TEST(test_NombrePrueba19) {
    char arreglo[50] = {"xxxxxxxxxxxxxxxxxxxxx"};
    mu_assert_int_eq(0, palabras_reservadas(arreglo));
}

MU_TEST(test_NombrePrueba20) {
    char arreglo[50] = {"numero"};
    mu_assert_int_eq(0, palabras_reservadas(arreglo));
}





MU_TEST_SUITE(test_suite) {

    /*Estos se encargan de ejecutar la funcion es_valido*/
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
    MU_RUN_TEST(test_NombrePrueba4);
    MU_RUN_TEST(test_NombrePrueba5);
    MU_RUN_TEST(test_NombrePrueba6);
    MU_RUN_TEST(test_NombrePrueba7);
    MU_RUN_TEST(test_NombrePrueba8);
    MU_RUN_TEST(test_NombrePrueba9);
    MU_RUN_TEST(test_NombrePrueba10);
    /*Estos se encargan de ejecutar la funcion longitud*/
    MU_RUN_TEST(test_NombrePrueba11);
    MU_RUN_TEST(test_NombrePrueba12);
    MU_RUN_TEST(test_NombrePrueba13);
    MU_RUN_TEST(test_NombrePrueba14);
    MU_RUN_TEST(test_NombrePrueba15);
    /*Estos se encargan de probar la funcion palabras_resevada*/
    MU_RUN_TEST(test_NombrePrueba16);
    MU_RUN_TEST(test_NombrePrueba17);
    MU_RUN_TEST(test_NombrePrueba18);
    MU_RUN_TEST(test_NombrePrueba19);
    MU_RUN_TEST(test_NombrePrueba20);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}