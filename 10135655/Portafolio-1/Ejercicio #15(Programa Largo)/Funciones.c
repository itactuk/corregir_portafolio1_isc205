//
// Created by diego on 9/10/2019.
//
#include <stdio.h>
#include "Funciones.h"
#include <string.h>

void introducir(estudiantes est[],int x)
{
    int i,j,k,suma;
    for(i = 0;i < x;i++) // Varia los Estudiantes
    {
        printf("\nIngrese el Nombre del Estudiante");
        fflush(stdin);
        gets(est[i].nombre);
        printf("\nIngrese la Matricula del Estudiante:");
        fflush(stdin);
        scanf("%ld",&est[i].matricula);
        printf("\nIngrese la Edad del Estudiante: ");
        fflush(stdin);
        scanf("%d",&est[i].edad);
        printf("\nIngrese La Cantidad de Materias en Curso del Estudiante: ");
        fflush(stdin);
        scanf("%d",&est[i].c_materias);

        for(j = 0;j < est[i].c_materias;j++) // Varia las Materias
        {
            suma = 0;
            printf("\nIntroduzca el nombre de la Materia %d: ",j+1);
            fflush(stdin);
            gets(est[i].mat[i].nombre_materia);
            printf("\nIntroduzca la cantidad de evaluciaciones del curso: ");
            fflush(stdin);
            scanf("%d",&est[i].mat[i].c_evaluciones);


            for(k = 0;k < est[i].mat[i].c_evaluciones;k++) //Varia Las Evaluciones
            {
                printf("\nIngrese el Nombre de la Evalucion %d: ",k + 1);
                fflush(stdin);
                gets(est[i].mat[j].eval[k].nombre_evaluacion);
                printf("\nIngrese la Poderacion de la Evalucion %d: ",k + 1);
                fflush(stdin);
                scanf("%f",&est[i].mat[j].eval[k].poderacion);
                printf("\nIngrese la Nota Sacada en la Evalucion %d: ",k + 1);
                fflush(stdin);
                scanf("%f",&est[i].mat[j].eval[k].nota);

                suma += est[i].mat[j].eval[k].poderacion;

                if(k == (est[i].mat[i].c_evaluciones - 1))
                {
                    if(suma != 100)
                    {
                        printf("\nLa sumatoria de la poderacion debe ser igual a 100(Introduzca todas las evaluaciones de nuevo correctamente)\n");
                        k = -1;
                        suma = 0;
                    }
                }
                else if(est[i].mat[j].eval[k].nota > 100)
                {
                    printf("\nLa nota ingresada tiene que ser menor a 100\n");
                    k--;
                }
            }
        }
    }
}

float promedio1(estudiantes est)
{
    int i,j;
    float suma;
    suma = 0;

    for(i = 0;i < est.c_materias;i++)
    {
        for(j = 0;j < est.mat[i].c_evaluciones;j++)
        {
            suma += est.mat[i].eval[j].nota * (est.mat[i].eval[j].poderacion / 100);
        }
    }

    return suma / (float)est.c_materias;
}

float prom(estudiantes est[],int x)
{
    int i;
    float suma;
    suma = 0;

    for(i = 0;i < x;i++)
    {
        suma += promedio1(est[i]);
    }

    return suma / (float)x;
}

int bmatricula(estudiantes est[],int ii,int is,long int mat)
{
    int med;
    med = (ii + is) / 2;

    if(mat == est[med].matricula)
    {
        return med;
    }
    else if(ii == is)
    {
        return -1;
    }
    else if(mat < est[med].matricula)
    {
        return bmatricula(est,ii,med - 1,mat);
    }
    else if(mat > est[med].matricula)
    {
        return bmatricula(est,med + 1,is,mat);
    }
}



int estudiantemayornota(estudiantes est[],int x)
{
    int i;
    float max;
    max = 0;

    for(i = 0;i < x;i++)
    {
        if(est[i].promedio > max)
        {
            max = est[i].promedio;
        }
    }

    for(i = 0;i < x;i++)
    {
        if(est[i].promedio == max)
        {
            printf("La Maxima nota fue el estudiante %d: %.2f pts",i,est[i].promedio);
            return i;
        }
    }

    return -1;
}

void notas(estudiantes est[],int x)
{
    estudiantes aux;
    int i,j;

    for (i = 0 ; i < x - 1; i++)
    {
        for (j = 0 ; j < x - i - 1; j++)
        {
            if (est[j].promedio < est[j+1].promedio)
            {
                aux     = est[j];
                est[j]  = est[j+1];
                est[j+1] = aux;
            }
        }
    }

    for(i = 0;i < x;i++)
    {
        printf("\nEstudiante %d: %.2f pts\n",i,est[i].promedio);
    }
}

