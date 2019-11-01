#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOMBRE 50
#define SUBJECT 100
#define NOTA 15


void limpiar_pantalla()
{
    system("cls");
}

void promedio_nota(int[],int);
void limpiar_pantalla();

int i,j;


struct student
{
    char nombre[NOMBRE];
    int matricula;
    int edad;
    char materia_curso[SUBJECT];
    int notas[NOTA];
    int cantidad_materia;

};


int main()
{
    char nombre[NOMBRE],comparador[NOMBRE];
    char materia_curso[SUBJECT];
    int menu,comparador_matricula;
    char decision;

    printf("Registro de datos de estudiantes.\n\n");

    struct student first_student;
    struct student second_student;
    struct student third_student;

    do
    {
        printf("Bienvenido:\n\n");
        printf("1-) Ingresar la nota de 3 estudiantes.\n");
        printf("2-) Calcular el promedio de la nota de estudiante.\n");
        printf("3-) Buscar los datos de un estudiante ingresado.\n");
        printf("4-) Salir");
        scanf("%d",&menu);
        limpiar_pantalla();

        switch(menu)
        {
        case 1:
            fflush(stdin);

            printf("Ingrese el nombre del primer estudiante: ");
            gets(nombre);
            strcpy(nombre,first_student.nombre);
            printf("Ingrese su matricula: ");
            scanf("%d",&first_student.matricula);
            printf("Ingrese su edad: ");
            scanf("%d",&first_student.edad);
            printf("Cuantas materias tiene este estudiante: ");
            scanf("%d",&first_student.cantidad_materia);
            printf("Digite el nombre de las materias: ");
            for(i=0; i<first_student.cantidad_materia; i++)
            {
                scanf("%c",&first_student.materia_curso[i]);
                if(first_student.materia_curso[i]==' ')
                {
                    printf("\n");
                }

            }
            printf("\n");


            fflush(stdin);
            printf("Ingrese el nombre del segundo estudiante: ");
            gets(nombre);
            strcpy(nombre,second_student.nombre);
            printf("Ingrese su matricula: ");
            scanf("%d",&second_student.matricula);
            printf("Ingrese su edad: ");
            scanf("%d",&second_student.edad);
            printf("Cuantas materias tiene este estudiante: ");
            scanf("%d",&second_student.cantidad_materia);
            printf("Digite el nombre de las materias: ");
            for(i=0; i<second_student.cantidad_materia; i++)
            {
                scanf("%c",&second_student.materia_curso[i]);
                if(second_student.materia_curso[i]==' ')
                {
                    printf("\n");
                }

            }
            printf("\n");


            fflush(stdin);
            printf("Ingrese el nombre del tercer estudiante: ");
            gets(nombre);
            strcpy(nombre,third_student.nombre);
            printf("Ingrese su matricula: ");
            scanf("%d",&third_student.matricula);
            printf("Ingrese su edad: ");
            scanf("%d",&third_student.edad);
            printf("Cuantas materias tiene este estudiante: ");
            scanf("%d",&third_student.cantidad_materia);
            printf("Digite el nombre de las materias: ");
            for(i=0; i<third_student.cantidad_materia; i++)
            {
                scanf("%c",&third_student.materia_curso[i]);
                if(third_student.materia_curso[i]==' ')
                {
                    printf("\n");
                }

            }

            printf("\n");
            break;

        case 2:
            fflush(stdin);

            printf("Ingrese el nombre del estudiante el cual desea calcular su nota: ");
            gets(comparador);

            if(comparador==first_student.nombre)
            {
                promedio_nota(first_student.notas,first_student.cantidad_materia);
            }
            else if(comparador==second_student.nombre)
            {
                promedio_nota(second_student.notas,second_student.cantidad_materia);
            }
            else if(comparador==third_student.nombre)
            {
                promedio_nota(third_student.notas,third_student.cantidad_materia);
            }
            break;

        case 3:
            fflush(stdin);

            printf("Digite la matricula del estudiante del cual desea buscar sus datos: ");
            scanf("%d",&comparador_matricula);
            if(comparador_matricula==first_student.matricula)
            {
                printf("Nombre del estudiante: ");
                puts(first_student.nombre);
                printf("\n\n");
                printf("Matricula del estudiante: ");
                printf("%d",first_student.matricula);
                printf("\n\n");
                printf("Materias del estudiante: ");
                puts(first_student.materia_curso);
                printf("\n\n");

            }
            else if(comparador_matricula==second_student.matricula)
            {
                printf("Nombre del estudiante: ");
                puts(second_student.nombre);
                printf("\n\n");
                printf("Matricula del estudiante: ");
                printf("%d",second_student.matricula);
                printf("\n\n");
                printf("Materias del estudiante: ");
                puts(second_student.materia_curso);
                printf("\n\n");

            }
            else if(comparador_matricula==third_student.matricula)
            {
                printf("Nombre del estudiante: ");
                puts(third_student.nombre);
                printf("\n\n");
                printf("Matricula del estudiante: ");
                printf("%d",third_student.matricula);
                printf("\n\n");
                printf("Materias del estudiante: ");
                puts(third_student.materia_curso);
                printf("\n\n");

            }
            break;

        case 4:
            break;

        default:
            printf("Wrong number!!.");

        }

        fflush(stdin);
        printf("Desea regresar al menu anterior?");
        scanf("%c",&decision);
    }
    while(decision=='s');


    return 0;
}

void promedio_nota(int nota[],int cantidad)
{
    int sumador = 0;

    fflush(stdin);
    printf("Digite las notas que obtuvo en cada materia a continuacion...\n\n");
    for(i=0; i<cantidad; i++)
    {
        printf("Digite la nota de la materia numero %d",i+1);
        scanf("%d",&nota[i]);
    }

    for(i=0; i<cantidad; i++)
    {
        sumador += nota[i];
    }

    printf("El promedio de las notas de este estudiante es: %d",sumador / cantidad);


}


