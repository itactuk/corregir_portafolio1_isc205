//
// Created by diego on 9/10/2019.
//

#include "minunit.h"
#include "Buscaminas.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba1) {
        int x[100];
        int fil,cant,cont,i;
        fil = 5;
        cant = 2;
        cont = 0;

        gbombas(x,fil,cant);

        for(i = 0;i < fil;i++)
        {
            if(x[i] == 9)
                cont++;
        }

        mu_assert_int_eq(cant, cont);
}

MU_TEST(test_NombrePrueba2) {
        int x[100];
        int fil, cant, cont, i;
        fil = 20;
        cant = 8;
        cont = 0;

        gbombas(x, fil, cant);

        for (i = 0; i < fil; i++)
        {
            if (x[i] == 9)
                cont++;

        }

        mu_assert_int_eq(cant, cont);
}

MU_TEST(test_NombrePrueba3) {
        int x[100];
        int fil, cant, cont, i;
        fil = 100;
        cant = 63;
        cont = 0;

        gbombas(x, fil, cant);

        for (i = 0; i < fil; i++)
        {
            if (x[i] == 9)
                cont++;
        }

        mu_assert_int_eq(cant, cont);
}

MU_TEST_SUITE(test_suite){
        MU_RUN_TEST(test_NombrePrueba1);
        MU_RUN_TEST(test_NombrePrueba2);
        MU_RUN_TEST(test_NombrePrueba3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}


