#include "minunit.h"
#include "Funciones.h"
#include <stdio.h>

int main()
{
    estudiantes est[50];
    int c_estudiantes,i,j,k;

    printf("Ingrese la Cantidad de estudiantes: ");
    scanf("%d",&c_estudiantes);

    introducir(est,c_estudiantes);

    for(i = 0;i < c_estudiantes;i++) // Varia los Estudiantes
    {
        printf("\nNombre del Estudiante: %s",est[i].nombre);
        printf("\nMatricula del Estudiante: %ld",est[i].matricula);
        printf("\nEdad del Estudiante: %d a%cos",est[i].edad,164);
        printf("\nCantidad de Materias en Curso del Estudiante: %d",est[i].c_materias);

        for(j = 0;j < est[i].c_materias;j++) // Varia las Materias
        {
            printf("\n\nNombre de la Materia: %s",est[i].mat[i].nombre_materia);
            printf("\nCantidad de evaluciaciones del curso: %d",est[i].mat[i].c_evaluciones);

            for(k = 0;k < est[i].mat[i].c_evaluciones;k++) //Varia Las Evaluciones
            {
                printf("\n\nNombre de la Evalucion: %s",est[i].mat[j].eval[k].nombre_evaluacion);
                printf("\nPoderacion: %lf",est[i].mat[j].eval[k].poderacion);
                printf("\nNota Obtenida: %lf",est[i].mat[j].eval[k].nota);
            }
        }
    }
}