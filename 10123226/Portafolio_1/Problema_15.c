#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define NOMBRE 50
#define MATERIA 100
#define NOTA 15

//Estructuras
struct Estudiante
{
    char nombre[NOMBRE];
    int matricula;
    int edad;
    char materia_curso[MATERIA];
    int notas[NOTA];
    int cantidad_materia;



};

//Prototipo de las funciones
void promedio_nota(int[],int);
void limpiar_pantalla();
//Variables globales
int i,j;

int main()
{   //variables a utilizar
    char nombre[NOMBRE],comparador[NOMBRE];
    char materia_curso[MATERIA];
    int menu,comparador_matricula;
    char decision;

        printf("Registro de datos de estudiantes.\n\n");
        // variables derivadas de la estructura para los 3 estudiantes
        struct Estudiante primer_estudiante;
        struct Estudiante segundo_estudiante;
        struct Estudiante tercer_estudiante;
        //do para que cada vez que el usuario desee repetir lo haga
            do
            { //menu
                printf("Que desea:\n\n");
                printf("1-) Ingresar la nota de 3 estudiantes.\n");
                printf("2-) Calcular el promedio de la nota de estudiante.\n");
                printf("3-) Buscar los datos de un estudiante ingresado.\n");
                printf("4-) Salir");
                scanf("%d",&menu);
                limpiar_pantalla(); //limpiador de pantalla

             switch(menu)
             {
                 case 1: fflush(stdin); //limpiador de memoria temporal

            printf("Ingrese el nombre del primer estudiante: "); gets(nombre);
            strcpy(nombre,primer_estudiante.nombre);
            printf("Ingrese su matricula: "); scanf("%d",&primer_estudiante.matricula);
            printf("Ingrese su edad: "); scanf("%d",&primer_estudiante.edad);
            printf("Cuantas materias tiene este estudiante: "); scanf("%d",&primer_estudiante.cantidad_materia);
            printf("Digite el nombre de las materias: ");
                for(i=0;i<MATERIA;i++)
                {
                    scanf("%c",&primer_estudiante.materia_curso[i]);
                        if(primer_estudiante.materia_curso[i]==' ')//cada vez que el usuario tecle la barra espaciadora
                        {                                          // dara un salto de linea para que los nombres esten
                            printf("\n");                          // separados
                        }

                }
            printf("\n");


            fflush(stdin);
                          printf("Ingrese el nombre del segundo estudiante: "); gets(nombre);
            strcpy(nombre,segundo_estudiante.nombre);
            printf("Ingrese su matricula: "); scanf("%d",&segundo_estudiante.matricula);
            printf("Ingrese su edad: "); scanf("%d",&segundo_estudiante.edad);
            printf("Cuantas materias tiene este estudiante: "); scanf("%d",&segundo_estudiante.cantidad_materia);
            printf("Digite el nombre de las materias: ");
                for(i=0;i<MATERIA;i++)
                {
                    scanf("%c",&segundo_estudiante.materia_curso[i]);
                        if(segundo_estudiante.materia_curso[i]==' ')
                        {
                            printf("\n");
                        }

                }
            printf("\n");


            fflush(stdin);
                           printf("Ingrese el nombre del tercer estudiante: "); gets(nombre);
            strcpy(nombre,tercer_estudiante.nombre);
            printf("Ingrese su matricula: "); scanf("%d",&tercer_estudiante.matricula);
            printf("Ingrese su edad: "); scanf("%d",&tercer_estudiante.edad);
            printf("Cuantas materias tiene este estudiante: "); scanf("%d",&tercer_estudiante.cantidad_materia);
            printf("Digite el nombre de las materias: ");
                for(i=0;i<MATERIA;i++)
                {
                    scanf("%c",&tercer_estudiante.materia_curso[i]);
                        if(tercer_estudiante.materia_curso[i]==' ')
                        {
                            printf("\n");
                        }

                }

            printf("\n"); break;

                  case 2: fflush(stdin);

                          printf("Ingrese el nombre del estudiante el cual desea calcular su nota: ");
                             gets(comparador);

                                if(comparador==primer_estudiante.nombre)
                                {
                                    promedio_nota(primer_estudiante.notas,primer_estudiante.cantidad_materia);
                                }
                                else if(comparador==segundo_estudiante.nombre)
                                {
                                    promedio_nota(segundo_estudiante.notas,segundo_estudiante.cantidad_materia);
                                }
                                else if(comparador==tercer_estudiante.nombre)
                                {
                                    promedio_nota(tercer_estudiante.notas,tercer_estudiante.cantidad_materia);
                                }
                                    break;

                  case 3: fflush(stdin);

                           printf("Digite la matricula del estudiante del cual desea buscar sus datos: ");
                                scanf("%d",&comparador_matricula);
                                    if(comparador_matricula==primer_estudiante.matricula)
                                    {
                                        printf("Nombre del estudiante: "); puts(primer_estudiante.nombre);
                                        printf("\n\n");
                                        printf("Matricula del estudiante: "); printf("%d",primer_estudiante.matricula);
                                        printf("\n\n");
                                        printf("Materias que cursa el estudiante: "); puts(primer_estudiante.materia_curso);
                                        printf("\n\n");

                                    }
                                    else if(comparador_matricula==segundo_estudiante.matricula)
                                    {
                                        printf("Nombre del estudiante: "); puts(segundo_estudiante.nombre);
                                        printf("\n\n");
                                        printf("Matricula del estudiante: "); printf("%d",segundo_estudiante.matricula);
                                        printf("\n\n");
                                        printf("Materias que cursa el estudiante: "); puts(segundo_estudiante.materia_curso);
                                        printf("\n\n");

                                    }
                                    else if(comparador_matricula==tercer_estudiante.matricula)
                                    {
                                        printf("Nombre del estudiante: "); puts(tercer_estudiante.nombre);
                                        printf("\n\n");
                                        printf("Matricula del estudiante: "); printf("%d",tercer_estudiante.matricula);
                                        printf("\n\n");
                                        printf("Materias que cursa el estudiante: "); puts(tercer_estudiante.materia_curso);
                                        printf("\n\n");

                                    }
                                        break;

                  case 4: break;

                  default: printf("Lo sentimos. Esta opcion no esta en las dadas en el menu.");

             }

            fflush(stdin);
            printf("Desea regresar al menu?"); scanf("%c",&decision);
            } while(decision=='s');


    return 0;
}
//funciones desarrolladas
void promedio_nota(int nota[],int cantidad)
{
    int sumador = 0;

       fflush(stdin);
        printf("Digite las notas que obtuvo en cada materia a continuacion...\n\n");
            for(i=0;i<cantidad;i++)
            {
                printf("Digite la nota de la materia numero %d",i+1);
                scanf("%d",&nota[i]);
            }

            for(i=0;i<cantidad;i++)
            {
                sumador += nota[i];
            }

        printf("El promedio de las notas de este estudiante es: %d",sumador / cantidad);


}

void limpiar_pantalla()
{
    system("cls");
}
