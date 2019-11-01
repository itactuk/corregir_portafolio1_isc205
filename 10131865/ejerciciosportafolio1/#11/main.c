#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void imprimir_tablero(int tablero[][15], int perder);
void colocar_bombas(int minas[][15], int bum);
void frases_1(int buscar);
void frases_2(int numero);

#define RENGLON 15
#define COLUMNA 15

int main()
{
  int buscaminas[RENGLON][COLUMNA] = {0}, i, j;
  int nivel, bombas;                                    //bonb aleatwa
  int gameStatus, gameCounter = 0, victoria;            //kontrol jwet la
  int tiradas, frases;                                  //statistik jwet la
  float rating;
  char salida;

  do{
       system("cls");

       printf("10 bombas en el primer nivel + 5 por cada uno.\n\n");

       printf("~Ingresa el nivel del juego:\n.-Nivel 1\n");
       printf("-Nivel 2\n");


       scanf("%d", &nivel);

       switch(nivel){

           case 1: bombas = 10;
                   break;

           case 2: bombas = 15;
                   break;

           default: printf("Seleccion invalida, intente de nuevo.\n\n");
                    break;

       }

       srand(time(NULL));  //pou numero aleatwa

       colocar_bombas(buscaminas, bombas);

       tiradas = 0; //numero de tirada en el juego

       do{
           system("cls");
           printf("\n-Buscaminas 1.0-\n\n");

           imprimir_tablero(buscaminas, gameStatus);

           printf("\n"); //nueva linea

           printf("*Ingrese la tirada[i, j]: ");
           scanf("%d%d",&i, &j);

           if(buscaminas[i][j] == 3){
               gameStatus = -1;
               tiradas++;

               system("cls");
               printf("\nBuscaminas1.0-\n\n");
               imprimir_tablero(buscaminas, gameStatus);

               printf("\t\t\t\t\t  Perdiste, el juego ha terminado!!");

               getch();
           }
           else
           {
               buscaminas[i][j] = 1;
               gameCounter++;
               tiradas++;
           }
           if(gameCounter == (225 - bombas) )
           {
               victoria = 1;
               system("cls");
               printf("\nBuscaminas1.0-\n\n");
               imprimir_tablero(buscaminas, gameStatus);

               printf("\t\t\t\t\t  Ganaste!!");

               getch();
           }


       }while(gameStatus != -1 || victoria == 1);

       system("cls");

       rating = ((float)gameCounter * 100) / 225;

       printf("\n-Buscaminas 1.0- Estadisticas del juego.\n\n");
       printf("Tu estatistica  de juego es %.2f %.2f%\n", rating);
       printf("*No. de tiradas %d.\n\n", tiradas);

       frases = 1 + rand() % 4;

       if(gameStatus == -1)
         frases_2(frases);
       else if(victoria == 1)
         frases_1(frases);

       printf("\n\n");

       printf("¿Desea jugar de nuevo(S/N)?: ");

       salida = getch();
       salida = tolower(salida);

       for(i = 0; i <= RENGLON - 1; i++)
         for(j = 0; j <= COLUMNA - 1; j++)
           buscaminas[i][j] = 0;

       gameCounter = 0;


  }while(salida == 's');

  system("cls");
  printf("\nBuscaminas1.0-\n\n");


  getch();
  //system("PAUSE");
  return 0;
}

/*fonksyon sa pemet ou afiche bomb yo nan tabloa a l'aide de yon fonksyons aleatwa
de 0-14 vale na arreglo a 3 es se vale lojic nan jwet la
*/
void colocar_bombas(int minas[][15], int bum)
{
     int i, renglon, columna;

     for(i = 1; i <= bum; i++)
     {
           renglon = 0 + rand() % 14;
           columna = 0 + rand() % 14;

           minas[renglon][columna] = 3;
     }
}

void frases_1(int buscar)
{
     switch(buscar)
     {
         case 1: printf("¡Muy bien!\n");
                 break;

         case 2: printf("¡Excelente!\n");
                 break;

         case 3: printf("¡Buen trabajo!\n");
                 break;

         case 4: printf("¡Sigue asi!\n");
                 break;
     }
}

void frases_2(int numero)
{
     switch(numero)
     {
         case 1: printf("¡Muy bien!\n");
                 break;

         case 2: printf("¡Excelente!\n");
                 break;

         case 3: printf("¡Buen trabajo!\n");
                 break;

         case 4: printf("¡Sigue asi!\n");
                 break;

     }
}

void imprimir_tablero(int tablero[][15], int perder)
{
     int i, j;

     for(i = 0; i <= RENGLON -1; i++)  //antet
       printf("%d ", i);

     printf("\n");  //nouvo ligne

     for(i = 0; i <= COLUMNA - 1; i++)
       printf("--");

     printf("\n");

     for(i = 0; i <= RENGLON -1; i++)
     {
           for(j = 0; j <= COLUMNA - 1; j++){

             if(tablero[i][j] == 1)
               printf("%d ", tablero[i][j]);
             else if((tablero[i][j] == 3) && (perder == -1))
               printf("%c ", 'b');
             else
               printf("%c ", '*');
           }

           printf("| %d", i);
           printf("\n");

     }



}

