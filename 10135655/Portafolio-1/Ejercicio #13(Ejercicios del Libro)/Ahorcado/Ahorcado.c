//
// Created by diego on 2/10/2019.
//

#include <stdio.h>
#include <ctype.h>
/*Esta funcion se dedica a imprimir el muneco dependiendo de las vidas, poner los espacios donde van las palabras*/
 /* y acormodar los elementos dentro de un cuadro*/
void munequito(int vidas,char adivinada[])
{
    int i;

    for(i = 0; i < 30;i++)
    {
        printf("= ");
    }

    printf("\n\t\t\tEL AHORCADO\t\tvidas = %d\t\t\t\n",vidas);

    for(i = 0; i < 30;i++)
    {
        printf("= ");
    }

    if(vidas == 5)
    {
        printf("\n    +==========++\n");
        printf("      |          ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("         =========\t\t");
    }

    else if(vidas == 4)
    {
        printf("\n    +==========++\n");
        printf("      |          ||\n");
        printf("     ___         ||\n");
        printf("   / O O %c       ||\n",92);
        printf("   %c ___ /       ||\n",92);
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("         =========\t\t");
    }

    else if(vidas == 3)
    {
        printf("\n    +==========++\n");
        printf("      |          ||\n");
        printf("     ___         ||\n");
        printf("   / O O %c       ||\n",92);
        printf("   %c ___ /       ||\n",92);
        printf("      |          ||\n");
        printf("      |          ||\n");
        printf("      |          ||\n");
        printf("      |          ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("         =========\t\t");
    }

    else if(vidas == 2)
    {
        printf("\n    +==========++\n");
        printf("      |          ||\n");
        printf("     ___         ||\n");
        printf("   / O O %c       ||\n",92);
        printf("   %c ___ /       ||\n",92);
        printf("      |          ||\n");
        printf("    / |          ||\n");
        printf("   /  |          ||\n");
        printf("      |          ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("         =========\t\t");
    }

    else if(vidas == 1)
    {
        printf("\n    +==========++\n");
        printf("      |          ||\n");
        printf("     ___         ||\n");
        printf("   / O O %c       ||\n",92);
        printf("   %c ___ /       ||\n",92);
        printf("      |          ||\n");
        printf("    / | %c        ||\n",92);
        printf("   /  |  %c       ||\n",92);
        printf("      |          ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("                 ||\n");
        printf("         =========\t\t");
    }


    for(i = 0; i < 10; i++)
    {
        if(adivinada[i] != '\0')
        {
            printf("%c ",adivinada[i]);
        }
        else
        {
            break;
        }
    }

    printf("\n\n");

    for(i = 0; i < 30;i++)
        printf("= ");
    printf("\n");
}
/*Esta funcion se ejecuta cuando las vidas del jugador es igual a 0 he imprime dentro de un cuadro la palabra perdiste,el muneco,los espacios con las letras adivinadas y la palabra secreta*/
void perder(char adivinada[])
{
    int i;

    for(i = 0; i < 30;i++)
    {
        printf("= ");
    }

    printf("\n\t\t\tP E R D I S T E\t\t\t\t\n");

    for(i = 0; i < 30;i++)
    {
        printf("= ");
    }

    printf("\n    +==========++\n");
    printf("      |          ||\n");
    printf("     ___         ||\n");
    printf("   / X X %c       ||\n",92);
    printf("   %c ___ /       ||\n",92);
    printf("      |          ||\n");
    printf("    / | %c        ||\n",92);
    printf("   /  |  %c       ||\n",92);
    printf("      |          ||\n");
    printf("     / %c         ||\n",92);
    printf("    /   %c        ||\n",92);
    printf("                 ||\n");
    printf("         =========\t\t");

    for(i = 0; i < 10; i++)
    {
        if(adivinada[i] != '\0')
        {
            printf("%c ",toupper(adivinada[i]));
        }
        else
        {
            break;
        }
    }

    printf("\n\n");

    for(i = 0; i < 30;i++)
        printf("= ");



}


