//
// Created by diego on 2/10/2019.
//

#include <ctype.h>
/*Esta funcion se encarga de llenar el arreglo donde pondremos las letras adivinas de \0 que significa el final de una cadena para hacer que se detenga en funciones posterios y tambie pone los espacios donde en el arreglo donde guardamos la palabra hay letras lo reemplaza por "_"*/
void iniciar2(char palabra_adivinada[],char palabra[][20],int x)
{
    int i;

    for(i = 0;i < 20;i++)
    {
        palabra_adivinada[i] = '\0';
    }

    for(i = 0;i < 20;i++)
    {
        if(palabra[x][i] != '\0')
        {
            palabra_adivinada[i] = '_';
        }
        else
        {
            break;
        }
    }
}


/*Esta funcion se encarga de comparar la letra con cada uno de los elementos del arreglo donde se encuentra la palabra secreta y detecta si se encuenta la letra dentro del arreglo o no y si esta la coloca en la misma posicion dentro del arreglo donde nosotros guardamos las letras reemplazando los "_"*/
int adivinar_palabra2(char palabra[][20],char palabra_adivinada[],int vidas,char letra,int x)
{
    int c,i;
    c = 0;

    for(i = 0;i < 20;i++)
    {
        if(toupper(palabra[x][i]) == toupper(letra))
        {
            palabra_adivinada[i] = toupper(letra);
            c = 1;
        }
        else if(palabra[x][i] == '\0')/*Para deterner la funcion cuando se acabe la palabra usando el '\0' que identifica el fin de una cadena*/
        {
            break;
        }
    }

    if(c == 1)
    {
        return vidas;
    }
    else if(c == 0)
    {
        return (vidas-1);
    }
}
/*Esta funcion compara los arreglos de la palabra secreta y donde guardamos las letras para saber si son iguales y asi decirnos que ganamos con un 1 o si perdimos con un 0*/
int comparacion2(char palabras[][20],char adivinar[],int x)
{
    int i;

    for(i = 0;i < 20;i++)
    {
        if(toupper(palabras[x][i]) == toupper(adivinar[i]))
        {
            if(adivinar[i] == '\0')/*Para deterner la funcion cuando se acabe la palabra usando el '\0' que identifica el fin de una cadena*/
            {
                return 1;
            }
        }
        else if(toupper(palabras[x][i]) != toupper(adivinar[i]))
        {
            return 0;
        }
    }
}
