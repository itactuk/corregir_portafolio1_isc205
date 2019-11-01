//
// Created by diego on 8/10/2019.
//

int InsertionSort(int x[],int n)
{
    int i,d,aux;

    for (i = 1 ; i <= n - 1; i++) {
        d = i;

        while ( d > 0 && x[d-1] > x[d]) {
            aux = x[d];
            x[d] = x[d-1];
            x[d-1] = aux;

            d--;
        }
    }
}
