#include "minunit.h"
#include "BuscaminasEstructuras.h"
#include <stdlib.h>
#include <time.h>

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
       cas ca[20][20];
       int m,n,c,i,j,cont;
       m = 5;
       n = 5;
       c = 12;
       cont =0;

        colocar_minas(ca,m,n,c);

        for(i = 0; i < m;i++)
        {
            for(j = 0;j < n;j++)
            {
                if (ca[i][j].casilla == 9)
                {
                    cont++;
                }
            }
            printf("\n");
        }
        mu_assert_int_eq(c, cont);
}

MU_TEST(test_NombrePrueba2) {
    cas ca[20][20];
    int m,n,c,i,j,cont;
    m = 10;
    n = 10;
    c = 65;
    cont =0;

    colocar_minas(ca,m,n,c);

    for(i = 0; i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if (ca[i][j].casilla == 9)
            {
                cont++;
            }
        }
        printf("\n");
    }
    mu_assert_int_eq(c, cont);
}

MU_TEST(test_NombrePrueba3) {
    cas ca[20][20];
    int m,n,c,i,j,cont;
    m = 7;
    n = 7;
    c = 23;
    cont = 0;

    colocar_minas(ca,m,n,c);

    for(i = 0; i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if (ca[i][j].casilla == 9)
            {
                cont++;
            }
        }
        printf("\n");
    }
    mu_assert_int_eq(c, cont);
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