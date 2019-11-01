//
// Created by admin on 11/10/2019.
//
//Realiza un programa que te diga si una palabra es palindrome o no.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int EsPalindrome(char palabra[80],char inversa[80],int numc);


int EsPalindrome(char palabra[80],char inversa[80],int numc){
    int i,c=0,flag;

    for(i=1; i<=numc; i++, c++){
        inversa[c] = palabra[numc-i];
    }
    inversa[c] = '\0';
    flag = 1;

    for(int j=0; j<numc; j++){
        if(inversa[j] != palabra[j]){
            flag = 0;
        }
    }

    if(flag == 1){
        return 1;
    }
    else{
        return 0;
    }
}

