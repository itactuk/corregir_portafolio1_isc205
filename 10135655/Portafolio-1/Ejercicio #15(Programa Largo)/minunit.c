#include "minunit.h"
#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    estudiantes est12;
    est12.c_materias = 1;
    est12.mat[0].c_evaluciones = 2;
    est12.mat[0].eval[0].poderacion = 50;
    est12.mat[0].eval[0].nota = 89;
    est12.mat[0].eval[1].poderacion = 50;
    est12.mat[0].eval[1].nota = 96;

    mu_assert_int_eq((float)92.5,promedio1(est12));
}

MU_TEST(test_NombrePrueba2) {
    estudiantes est;

    est.c_materias = 3;
    est.mat[0].c_evaluciones = 2;
    est.mat[0].eval[0].poderacion = 50;
    est.mat[0].eval[0].nota = 89;
    est.mat[0].eval[1].poderacion = 50;
    est.mat[1].eval[1].nota = 96;
    est.mat[1].c_evaluciones = 3;
    est.mat[1].eval[0].poderacion = 50;
    est.mat[1].eval[0].nota = 89;
    est.mat[1].eval[1].poderacion = 25;
    est.mat[1].eval[1].nota = 56;
    est.mat[1].eval[2].poderacion = 25;
    est.mat[1].eval[2].nota = 12;
    est.mat[2].c_evaluciones = 1;
    est.mat[2].eval[0].poderacion = 100;
    est.mat[2].eval[0].nota = 82;

    mu_assert_int_eq((float)78, promedio1(est));
}

MU_TEST(test_NombrePrueba3) {
    estudiantes est;

    est.c_materias = 2;
    est.mat[0].c_evaluciones = 4;
    est.mat[0].eval[0].poderacion = 25;
    est.mat[0].eval[0].nota = 89;
    est.mat[0].eval[1].poderacion = 25;
    est.mat[0].eval[1].nota = 76;
    est.mat[0].eval[2].poderacion = 25;
    est.mat[0].eval[2].nota = 42;
    est.mat[0].eval[3].poderacion = 25;
    est.mat[0].eval[3].nota = 67;
    est.mat[1].c_evaluciones = 5;
    est.mat[1].eval[0].poderacion = 20;
    est.mat[1].eval[0].nota = 80;
    est.mat[1].eval[1].poderacion = 20;
    est.mat[1].eval[1].nota = 56;
    est.mat[1].eval[2].poderacion = 20;
    est.mat[1].eval[2].nota = 99;
    est.mat[1].eval[3].poderacion = 20;
    est.mat[1].eval[3].nota = 42;
    est.mat[1].eval[4].poderacion = 20;
    est.mat[1].eval[4].nota = 36;

    mu_assert_int_eq((float)65.55, promedio1(est));
}

MU_TEST(test_NombrePrueba4) {
    estudiantes est[2];
    int x = 2;

    // Estudiante #1
    est[0].c_materias = 1;
    est[0].mat[0].c_evaluciones = 2;
    est[0].mat[0].eval[0].poderacion = 50;
    est[0].mat[0].eval[0].nota = 89;
    est[0].mat[0].eval[1].poderacion = 50;
    est[0].mat[0].eval[1].nota = 92;
    //Estudiante #2
    est[1].c_materias = 1;
    est[1].mat[0].c_evaluciones = 2;
    est[1].mat[0].eval[0].poderacion = 50;
    est[1].mat[0].eval[0].nota = 23;
    est[1].mat[0].eval[1].poderacion = 50;
    est[1].mat[0].eval[1].nota = 72;


    mu_assert_int_eq((float)69, prom(est,x));
}

MU_TEST(test_NombrePrueba5) {
    estudiantes est[2];
    int x = 2;

    // Estudiante #1
    est[0].c_materias = 2;
    est[0].mat[0].c_evaluciones = 2;
    est[0].mat[0].eval[0].poderacion = 50;
    est[0].mat[0].eval[0].nota = 42;
    est[0].mat[0].eval[1].poderacion = 50;
    est[0].mat[0].eval[1].nota = 92;
    est[0].mat[1].c_evaluciones = 2;
    est[0].mat[1].eval[0].poderacion = 50;
    est[0].mat[1].eval[0].nota = 56;
    est[0].mat[1].eval[1].poderacion = 50;
    est[0].mat[1].eval[1].nota = 93;
    //Estudiante #2
    est[1].c_materias = 3;
    est[1].mat[0].c_evaluciones = 2;
    est[1].mat[0].eval[0].poderacion = 50;
    est[1].mat[0].eval[0].nota = 23;
    est[1].mat[0].eval[1].poderacion = 50;
    est[1].mat[0].eval[1].nota = 72;
    est[1].mat[1].c_evaluciones = 2;
    est[1].mat[1].eval[0].poderacion = 50;
    est[1].mat[1].eval[0].nota = 89;
    est[1].mat[1].eval[1].poderacion = 50;
    est[1].mat[1].eval[1].nota = 92;
    est[1].mat[2].c_evaluciones = 2;
    est[1].mat[2].eval[0].poderacion = 50;
    est[1].mat[2].eval[0].nota = 67;
    est[1].mat[2].eval[1].poderacion = 50;
    est[1].mat[2].eval[1].nota = 22;


    mu_assert_int_eq((float)65.79, prom(est,x));
}

MU_TEST(test_NombrePrueba6) {
    estudiantes est[3];
    int x = 3;

    // Estudiante #1
    est[0].c_materias = 2;
    est[0].mat[0].c_evaluciones = 2;
    est[0].mat[0].eval[0].poderacion = 50;
    est[0].mat[0].eval[0].nota = 42;
    est[0].mat[0].eval[1].poderacion = 50;
    est[0].mat[0].eval[1].nota = 92;
    est[0].mat[1].c_evaluciones = 2;
    est[0].mat[1].eval[0].poderacion = 50;
    est[0].mat[1].eval[0].nota = 56;
    est[0].mat[1].eval[1].poderacion = 50;
    est[0].mat[1].eval[1].nota = 93;
    //Estudiante #2
    est[1].c_materias = 3;
    est[1].mat[0].c_evaluciones = 2;
    est[1].mat[0].eval[0].poderacion = 50;
    est[1].mat[0].eval[0].nota = 23;
    est[1].mat[0].eval[1].poderacion = 50;
    est[1].mat[0].eval[1].nota = 72;
    est[1].mat[1].c_evaluciones = 2;
    est[1].mat[1].eval[0].poderacion = 50;
    est[1].mat[1].eval[0].nota = 89;
    est[1].mat[1].eval[1].poderacion = 50;
    est[1].mat[1].eval[1].nota = 92;
    est[1].mat[2].c_evaluciones = 2;
    est[1].mat[2].eval[0].poderacion = 50;
    est[1].mat[2].eval[0].nota = 67;
    est[1].mat[2].eval[1].poderacion = 50;
    est[1].mat[2].eval[1].nota = 22;
    //Estudiante #3
    est[1].c_materias = 1;
    est[1].mat[0].c_evaluciones = 2;
    est[1].mat[0].eval[0].poderacion = 50;
    est[1].mat[0].eval[0].nota = 13;
    est[1].mat[0].eval[1].poderacion = 50;
    est[1].mat[0].eval[1].nota = 42;

    mu_assert_int_eq((float)53.03, prom(est,x));
}

MU_TEST(test_NombrePrueba7) {
    estudiantes est[5];
    long int matricula = 20170432;
    int ii,is;
    ii = 0;
    is = 4;

    est[0].matricula = 20162345;
    est[1].matricula = 20170432;
    est[2].matricula = 20174321;
    est[3].matricula = 20181603;
    est[4].matricula = 20187345;

    mu_assert_int_eq(1, bmatricula(est,ii,is,matricula));
}

MU_TEST(test_NombrePrueba8) {
    estudiantes est[10];
    long int matricula = 20160245;
    int ii,is;
    ii = 0;
    is = 9;

    est[0].matricula = 20160245;
    est[1].matricula = 20165637;
    est[2].matricula = 20168341;
    est[3].matricula = 20170123;
    est[4].matricula = 20170125;
    est[5].matricula = 20173245;
    est[6].matricula = 20177239;
    est[7].matricula = 20179999;
    est[8].matricula = 20180426;
    est[9].matricula = 20181603;

    mu_assert_int_eq(0, bmatricula(est,ii,is,matricula));
}

MU_TEST(test_NombrePrueba9) {
    estudiantes est[10];
    long int matricula = 20181603;
    int ii,is;
    ii = 0;
    is = 9;

    est[0].matricula = 20160245;
    est[1].matricula = 20165637;
    est[2].matricula = 20168341;
    est[3].matricula = 20170123;
    est[4].matricula = 20170125;
    est[5].matricula = 20173245;
    est[6].matricula = 20177239;
    est[7].matricula = 20179999;
    est[8].matricula = 20180426;
    est[9].matricula = 20181603;

    mu_assert_int_eq(9, bmatricula(est,ii,is,matricula));
}

MU_TEST(test_NombrePrueba10) {
    estudiantes est[10];
    long int matricula = 20179999;
    int ii,is;
    ii = 0;
    is = 9;

    est[0].matricula = 20160245;
    est[1].matricula = 20165637;
    est[2].matricula = 20168341;
    est[3].matricula = 20170123;
    est[4].matricula = 20170125;
    est[5].matricula = 20173245;
    est[6].matricula = 20177239;
    est[7].matricula = 20179999;
    est[8].matricula = 20180426;
    est[9].matricula = 20181603;

    mu_assert_int_eq(7, bmatricula(est,ii,is,matricula));
}

MU_TEST(test_NombrePrueba11) {
    estudiantes est[5];
    int x= 5;

    est[0].promedio = 90;
    est[1].promedio = 87;
    est[2].promedio = 60;
    est[3].promedio = 92;
    est[4].promedio = 10;

    mu_assert_int_eq(3, estudiantemayornota(est,x));
}

MU_TEST(test_NombrePrueba12) {
    estudiantes est[5];
    int x= 5;

    est[0].promedio = 10;
    est[1].promedio = 37;
    est[2].promedio = 40;
    est[3].promedio = 52;
    est[4].promedio = 100;

    mu_assert_int_eq(4, estudiantemayornota(est,x));
}

MU_TEST(test_NombrePrueba13) {
    estudiantes est[7];
    int x= 7;

    est[0].promedio = 1;
    est[1].promedio = 23;
    est[2].promedio = 43;
    est[3].promedio = 12;
    est[4].promedio = 100;
    est[5].promedio = 93;
    est[6].promedio = 19;

    mu_assert_int_eq(4, estudiantemayornota(est,x));
}

MU_TEST(test_NombrePrueba14) {
    estudiantes est[10];
    int x= 10;

    est[0].promedio = 23;
    est[1].promedio = 43;
    est[2].promedio = 78;
    est[3].promedio = 91;
    est[4].promedio = 45;
    est[5].promedio = 43;
    est[6].promedio = 69;
    est[7].promedio = 93;
    est[8].promedio = 98;
    est[9].promedio = 12;

    mu_assert_int_eq(8, estudiantemayornota(est,x));
}

MU_TEST(test_NombrePrueba15) {
    estudiantes est[10];
    est[0].promedio = 23;
    est[1].promedio = 43;
    est[2].promedio = 78;
    est[3].promedio = 91;
    est[4].promedio = 45;
    est[5].promedio = 43;
    est[6].promedio = 69;
    est[7].promedio = 93;
    est[8].promedio = 98;
    est[9].promedio = 12;
    int x;
    x = 10;

    notas(est,x);

    mu_assert_int_eq(98, est[0].promedio);
    mu_assert_int_eq(93, est[1].promedio);
    mu_assert_int_eq(91, est[2].promedio);
    mu_assert_int_eq(78, est[3].promedio);
    mu_assert_int_eq(69, est[4].promedio);
    mu_assert_int_eq(45, est[5].promedio);
    mu_assert_int_eq(43, est[6].promedio);
    mu_assert_int_eq(43, est[7].promedio);
    mu_assert_int_eq(23, est[8].promedio);
    mu_assert_int_eq(12, est[9].promedio);
}

MU_TEST(test_NombrePrueba16) {
    estudiantes est[10];
    est[0].promedio = 34;
    est[1].promedio = 23;
    est[2].promedio = 78;
    est[3].promedio = 97;
    est[4].promedio = 54;
    est[5].promedio = 11;
    est[6].promedio = 34;
    est[7].promedio = 68;
    est[8].promedio = 99;
    est[9].promedio = 1;
    int x;
    x = 10;

    notas(est,x);

    mu_assert_int_eq(99, est[0].promedio);
    mu_assert_int_eq(97, est[1].promedio);
    mu_assert_int_eq(78, est[2].promedio);
    mu_assert_int_eq(68, est[3].promedio);
    mu_assert_int_eq(54, est[4].promedio);
    mu_assert_int_eq(34, est[5].promedio);
    mu_assert_int_eq(34, est[6].promedio);
    mu_assert_int_eq(23, est[7].promedio);
    mu_assert_int_eq(11, est[8].promedio);
    mu_assert_int_eq(1, est[9].promedio);
}

MU_TEST(test_NombrePrueba17) {
    estudiantes est[10];
    est[0].promedio = 1;
    est[1].promedio = 12;
    est[2].promedio = 43;
    est[3].promedio = 93;
    est[4].promedio = 54;
    est[5].promedio = 11;
    est[6].promedio = 66;
    est[7].promedio = 2;
    est[8].promedio = 45;
    est[9].promedio = 99;
    int x;
    x = 10;

    notas(est,x);

    mu_assert_int_eq(99, est[0].promedio);
    mu_assert_int_eq(93, est[1].promedio);
    mu_assert_int_eq(66, est[2].promedio);
    mu_assert_int_eq(54, est[3].promedio);
    mu_assert_int_eq(45, est[4].promedio);
    mu_assert_int_eq(43, est[5].promedio);
    mu_assert_int_eq(12, est[6].promedio);
    mu_assert_int_eq(11, est[7].promedio);
    mu_assert_int_eq(2, est[8].promedio);
    mu_assert_int_eq(1, est[9].promedio);
}

MU_TEST_SUITE(test_suite) {
    //Promedio de un estudiante
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
    //Promedio de un varios estudiantes
    MU_RUN_TEST(test_NombrePrueba4);
    MU_RUN_TEST(test_NombrePrueba5);
    MU_RUN_TEST(test_NombrePrueba6);
    //Busqueda por matricula
    MU_RUN_TEST(test_NombrePrueba7);
    MU_RUN_TEST(test_NombrePrueba8);
    MU_RUN_TEST(test_NombrePrueba9);
    MU_RUN_TEST(test_NombrePrueba10);
    //Nota mas alta
    MU_RUN_TEST(test_NombrePrueba11);
    MU_RUN_TEST(test_NombrePrueba12);
    MU_RUN_TEST(test_NombrePrueba13);
    MU_RUN_TEST(test_NombrePrueba14);
    //Tabla de estudiantes por notas
    MU_RUN_TEST(test_NombrePrueba15);
    MU_RUN_TEST(test_NombrePrueba16);
    MU_RUN_TEST(test_NombrePrueba17);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}