#ifndef VOLTMATRIZ_H_INCLUDED
#define VOLTMATRIZ_H_INCLUDED

int voltear_matriz (int arr[][3], int aux[][3], int limitv, int limith,int cons, int cons2, int controlv,int controlh)
{
    if (cons < 0){
        return -1;
    }else if ((controlh <= 3) && (limith >= 1)){
        aux[controlv][controlh] = arr[limitv][limith];
            voltear_matriz(arr, aux, limitv = cons, limith-1, cons, cons2, controlv = cons2, controlh + 1);
    }else if (controlh == 3){
            voltear_matriz(arr, aux, limitv-1, limith = cons, cons ,cons2, controlv+1, controlh = cons2);
    }else if ((controlv == 3) && (controlh == 3))
        return aux;
}

#endif // VOLTMATRIZ_H_INCLUDED
