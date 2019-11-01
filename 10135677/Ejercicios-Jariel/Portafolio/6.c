#include <stdio.h>

int buscar(int arreglo[],int numero,int ii, int is);

int main(void){
    int arreglo[]={12,23,34,45,56,67,78,89,910,1011};
    int ii,is,numero,indice;
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]);

    printf("Ingrese el indice inferior: ");
    scanf("%d",&ii);
    while(ii<0 || ii>tamano-1){
        printf("Reingrese el indice inferior: ");
        scanf("%d",&ii);
    }

    printf("Ingrese el indice superior: ");
    scanf("%d",&is);
    while(is>tamano-1 || is<0 || is<ii){
        printf("Reingrese el indice superior: ");
        scanf("%d",&is);
    }
    printf("Ingrese el numero a buscar: ");
    scanf("%d",&numero);
    indice = buscar(arreglo,numero,ii,is);

    if(indice>=0){
        printf("El numero %d se encuentra en el indice %d",numero,indice);
    }else{
        printf("El numero no se encuentra");
    }



}
int buscar(int arreglo[],int numero,int ii, int is){
    if(arreglo[ii]==numero){
        return ii;
    }else if(is>ii){
        int im=((is-ii)/2)+ii;
        if(numero>arreglo[im]){
            ii=im;
        }else if(numero<arreglo[im]){
            is=im;
        }
        else{
            return im;
        }
        buscar(arreglo,numero,ii,is);
    }else{
        return -1;
    }
}
