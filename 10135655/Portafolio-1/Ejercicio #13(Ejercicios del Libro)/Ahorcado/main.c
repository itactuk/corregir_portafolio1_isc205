#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "Funciones.h"

int main()
{
    char palabra_adivinada[12];/*Aqui donde almacenaremos las letras adivinadas*/
    int vidas,jugadores,flag; /*flag no sirve de bandera que nos dice si ya ganamos(1) o si el juego aun no termina(0)*/
    printf("Cuantos jugadores van a jugar [1 | 2]: ");
    scanf("%d",&jugadores);


    switch(jugadores)
    {
        case 1: {
            int x;
            char palabras[][20] = {{"DOMINICANA"},{"VENEZUELA"},{"AMIGOS"},{"CABALLO"},{"PERRO"},{"PAPEL"}};
            srand(time(NULL));
            x = rand() % 6;
            vidas = 5;
            flag = 0;
            iniciar2(palabra_adivinada, palabras,x);

            do
            {
                char letra;
                int i,valor_letra;
                if (vidas > 0 && flag == 0)/*Esta condicion indica que se ejecute de nuevo el juego porque flag es 0 por lo que aun no hemos ganado y vida es mayor a 0 por lo que no hemos perdido*/
                {
                    munequito(vidas, palabra_adivinada);
                    fflush(stdin);
                    printf("\n|Jugador 1| Ingrese una letra: \n");
                    letra = getchar();
                }
                else if (vidas == 0)/*Esta condicion indica cuando perdemos que es cuando la vida es igual a 0*/
                {
                    perder(palabra_adivinada);
                    printf("\n\n");
                    printf("La palabra secreta era: ");
                    for(i = 0;i < 12;i++)
                    {
                        if(palabras[x][i] != '\0')
                        {
                            printf("%c",palabras[x][i]);
                        }
                        else
                        {
                            break;
                        }
                    }
                    printf("\n");
                    system("pause");
                    break;
                }
                valor_letra = toupper(letra);

                if((valor_letra >= 65 && valor_letra <= 90) || valor_letra == 165) /* Esta condicion revisa si lo que introduce el usuario es una letra y no otro tipo de simbolos*/
                {
                    vidas = adivinar_palabra2(palabras, palabra_adivinada, vidas, letra,x);
                    flag = comparacion2(palabras, palabra_adivinada,x);

                    if (flag == 1) { /*Esta condicion se encarga de imprimir el mensaje de ganaste*/
                        for (i = 0; i < 30; i++) {
                            printf("= ");
                        }
                        printf("\n\t\t\tG A N A S T E\t\t\t\n");
                        for (i = 0; i < 30; i++) {
                            printf("= ");
                        }
                        printf("\n\n");
                        printf("La palabra secreta era: ");
                        for(i = 0;i < 12;i++)
                        {
                            if(palabras[x][i] != '\0')
                            {
                                printf("%c",palabras[x][i]);
                            }
                            else
                            {
                                break;
                            }
                        }

                        break;
                    }
                }
            }while(vidas >= 0 && flag == 0);
            break;
        }

        case 2:
        {
            int c = 0;
            char palabra[12]; /*aqui se almacena la palabra ingresa por el usuario*/

            while(c == 0)/*Es bucle se encarga de que la palabra ingresada solotenga letras mas no simbolos, ni espacios, ni numeros,etc*/
            {
                int i;
                printf("\n|Jugador 2| Ingrese la palabra a adivinar: \n");
                scanf("%s",palabra);
                for(i = 0; i < 12;i++)
                {
                    int valor_palabra;
                    valor_palabra = toupper(palabra[i]);
                    if(palabra[i] == '\0')
                    {
                        c = 1;
                        break;
                    }
                    else if(valor_palabra < 65 || valor_palabra > 90)
                    {
                        break;
                    }

                }
            }
            vidas = 5;flag = 0;
            iniciar(palabra_adivinada,palabra);

            do
            {
                char letra;
                int i,valor_letra;
                if(vidas > 0 && flag == 0)/*Esta condicion indica que se ejecute de nuevo el juego porque flag es 0 por lo que aun no hemos ganado y vida es mayor a 0 por lo que no hemos perdido*/
                {
                    munequito(vidas,palabra_adivinada);
                    fflush(stdin);
                    printf("\n|Jugador 1| Ingrese una letra: \n");
                    letra = getchar();
                }
                else if(vidas == 0)/*Esta condicion indica cuando perdemos que es cuando la vida es igual a 0*/
                {
                    perder(palabra_adivinada);
                    printf("\n\n");
                    printf("La palabra secreta era: ");
                    for(i = 0;i < 12;i++)
                    {
                        if(palabra[i] != '\0')
                        {
                            printf("%c",palabra[i]);
                        }
                        else
                        {
                            break;
                        }
                    }
                    printf("\n");
                    system("pause");
                    break;
                }
                valor_letra = toupper(letra);

                if((valor_letra >= 65 && valor_letra <= 90) || valor_letra == 165)/* Esta condicion revisa si lo que introduce el usuario es una letra y no otro tipo de simbolos*/
                {
                    vidas = adivinar_palabra(palabra,palabra_adivinada,vidas,letra);
                    flag = comparacion(palabra,palabra_adivinada);

                    if(flag == 1)/*Esta condicion se encarga de imprimir el mensaje de ganaste*/
                    {
                        for(i = 0;i < 30;i++)
                        {
                            printf("= ");
                        }
                        printf("\n\t\t\tG A N A S T E\t\t\t\n");
                        for(i = 0;i < 30;i++)
                        {
                            printf("= ");
                        }
                        printf("\n\n");
                        printf("La palabra secreta era: ");
                        for(i = 0;i < 12;i++)
                        {
                            if(palabra[i] != '\0')
                            {
                                printf("%c",palabra[i]);
                            }
                            else
                            {
                                break;
                            }
                        }
                        printf("\n");

                        break;
                    }
                }
            }while(vidas >= 0 && flag == 0);
            break;
        }
        default:
        {
            printf("\nError Intentelo de Nuevo\n");
            system("pause");
            exit(0);
        }
    }
}
