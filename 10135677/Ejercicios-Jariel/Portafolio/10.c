#include <stdio.h>

int pasos(int a, int b);

int main(void){
    int a,b,cant_pasos;
    printf("Digite el numero base: ");
    scanf("%d",&a);
    printf("Digite la meta: ");
    scanf("%d",&b);

    cant_pasos=pasos(a,b);
    if(cant_pasos>=1){
        printf("Ha tomado %d paso(s) para llegar a la meta\n",cant_pasos);
    }else if(cant_pasos==0){
        printf("Ha tomado %d paso(s) porque son iguales\n",cant_pasos);
    }else{
        printf("No se ha podido llegar a la meta\n");
    }
}
int pasos(int a, int b){
    int pfa,pga;
    if(a==b){
        return 0;
    }else if(a>b){
        return -1;
    }
    int fa=(2*a)+3;
    int ga=(3*a)+2;
    pfa = pasos(fa,b);
    pga = pasos(ga,b);
    if(fa<b){
        pasos(fa,b);
    }
    if(ga<b){
        pasos(ga,b);
    }
    if(fa==b){
        return 1;
    }
    if(ga==b){
        return 1;
    }
    if(pfa==-1){
        return pasos(fa,b)-1;
    }
    if(pga==-1){
        return pasos(ga,b)-1;
    }
}
