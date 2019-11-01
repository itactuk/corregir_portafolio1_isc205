//
// Created by diego on 2/10/2019.
//

#ifndef AHORCADO_FUNCIONES_H
#define AHORCADO_FUNCIONES_H

void munequito(int vidas,char adivinada[]);
void iniciar(char palabra_adivinada[],char palabra[]);
void iniciar2(char palabra_adivinada[],char palabra[][20],int x);
int comparacion(char palabras[],char adivinar[]);
int comparacion2(char palabras[][20],char adivinar[],int x);
int adivinar_palabra(char palabra[], char palabra_adivinada[],int vidas,char letra);
int adivinar_palabra2(char palabra[][20],char palabra_adivinada[],int vidas,char letra,int x);
void perder(char adivinada[]);

#endif //AHORCADO_FUNCIONES_H
