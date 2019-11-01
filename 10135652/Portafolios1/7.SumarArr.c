#include <stdio.h>
#define fil 5
#define col 5

void imprimir_arr();
int sumas();


int main(){
    int m1[fil][col]={56,67,28,39,40,
                      65,45,56,78,85,
                      95,86,20,60,35,
                      98,51,42,35,65,
                      65,98,45,32,15};

    imprimir_arr(m1);
    printf("\n\nLa suma es %d\n", sumas(m1,0,0));
    return 0;
}

int sumas(int m[fil][col], int i, int j){
 if (i < fil)
     if (j < col) return m[i][j] + sumas(m, i, j+1);
     else return sumas(m, i+1, 0);
 else return 0;
}


void imprimir_arr(int arr[5][5]){
    int i, j;
    printf("    TABLA\n\n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++)
        printf("%d ", arr[i][j]);

        printf("\n");
    }
}
