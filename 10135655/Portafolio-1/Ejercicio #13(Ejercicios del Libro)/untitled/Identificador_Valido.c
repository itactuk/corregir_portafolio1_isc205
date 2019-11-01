//
// Created by diego on 2/10/2019.
//

/* Esta funcion se encarga de determinar si el identificar es menor o igual a 31
por lo que si entonces retornaria 1 si es mayor retornaria cero */
#include <ctype.h>

int longitud(char x[])
{
    int i;
    for(i = 0;i < 50;i++)
    {
        if(x[i] == '\0')
        {

            if(i > 31) /*si es mayor a 31 no es un identificador valido entonces devuelve 0*/
            {
                return 0;
            }
            else if(i <= 31) /*si es menor o igual a 31 no es un identificador valido entonces devuelve 1*/
            {
                return 1;
            }
        }
    }

}

/*Esta funcion se encarga de evaluar varias caracteristicas que harian que el identificar
resultara siendo validos o no validos*/
int es_valido(char x[31])
{
    int i,cont;
    cont = 0;
    for(i = 0; i <= 31;i++)
    {

        if((x[0] >= 48 && x[0] <= 57)) /*Esta condicion usa la tabla ascii para determinar si el primer puesto del arreglo es distinto*/
        {                              /*a un a un numero, por lo cual si lo es, retornaria 0 diciendo que el indentificador no es valido*/
            return 0;
        }
        else if((x[i] >= 48 && x[i] <= 57) || (x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122) || (x[i] == 95))/*Esta condicion examina varias caracteriscas usando la tabla ascii donde basicamente dice que la condicion es verdera solo cuando el identificar*/
        {                                                                                                               /* tenga letra en mayusca o minuscula, numeros y piso de lo contrario no se ejecuta*/
            cont++;
        }
        else if(x[i] == '\0')/*si la funcion llega la punto de la cadena significa que todos los demas valores pasaron la condicion anterior por lo tanto seria considerado como un identificador valido*/
        {
            if(cont == i)
                return 1;
        }
        else     /*este else es por si introduce un simbolo especial o otros que no sean permitidos*/
        {
            return 0;
        }
    }
}

int palabras_reservadas(char x[]) /*Esta funcion se encarga de revisar si la palabra ingresada por el usuario es una palabra reservada por c*/
{
    char palabras[31][10] = {{"auto"},{"break"},{"case"},{"char"},{"const"},{"continue"},{"default"}
    ,{"do"},{"double"},{"else"},{"enum"},{"extern"},{"float"},{"for"}
    ,{"goto"},{"if"},{"int"},{"long"},{"register"},{"return"},{"short"}
    ,{"signed"},{"sizeof"},{"static"},{"struct"},{"typedef"},{"union"},{"unsigned"}
    ,{"void"},{"volatile"},{"while"}};
    int i,j;

    for(i = 0;i < 31;i++)
    {
        for(j = 0;j < 10;j++)
        {
            if(toupper(palabras[i][j]) == toupper(x[j]))
            {
                if(x[i] == '\0')
                {
                    return 1;
                }
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}

