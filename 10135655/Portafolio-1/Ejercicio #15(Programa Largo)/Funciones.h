//
// Created by diego on 9/10/2019.
//

#ifndef EJERCICIO__15_PROGRAMA_LARGO__FUNCIONES_H
#define EJERCICIO__15_PROGRAMA_LARGO__FUNCIONES_H

typedef struct evaluaciones
{
    char nombre_evaluacion[20];
    float poderacion;
    float nota;
}evaluaciones;


typedef struct materias
{
    char nombre_materia[20];
    int c_evaluciones;
    evaluaciones eval[20];
}materias;

typedef struct estudiantes
{
    char nombre[40];
    long int matricula;
    int edad;
    int c_materias;
    float promedio;
    materias mat[20];
}estudiantes;

void introducir(estudiantes est[],int x);
float promedio1(estudiantes est);
float prom(estudiantes est[],int x);
int bmatricula(estudiantes est[],int ii,int is,long int mat);
int estudiantemayornota(estudiantes est[],int x);
void notas(estudiantes est[],int x);


#endif //EJERCICIO__15_PROGRAMA_LARGO__FUNCIONES_H
