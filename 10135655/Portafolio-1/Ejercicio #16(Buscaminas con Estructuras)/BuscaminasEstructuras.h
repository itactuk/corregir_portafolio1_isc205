//
// Created by diego on 9/10/2019.
//

#ifndef EJERCICIO__16_BUSCAMINAS_CON_ESTRUCTURAS__BUSCAMINASESTRUCTURAS_H
#define EJERCICIO__16_BUSCAMINAS_CON_ESTRUCTURAS__BUSCAMINASESTRUCTURAS_H

typedef struct casillas
{
    int casilla;
}cas;

int colocar_minas(cas ca[20][20],int m,int n,int c_minas);

#endif //EJERCICIO__16_BUSCAMINAS_CON_ESTRUCTURAS__BUSCAMINASESTRUCTURAS_H



