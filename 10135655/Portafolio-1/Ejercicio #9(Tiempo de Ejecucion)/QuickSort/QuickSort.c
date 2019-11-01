//
// Created by diego on 8/10/2019.
//

int QuickSort(int x[],int n,int n2)
{
    int i, j, pivot, aux;

    if(n < n2)
    {
        pivot = n;
        i = n;
        j = n2;

        while(i<j)
        {
            while(x[i] <= x[pivot] && i < n2)
                i++;
            while(x[j] > x[pivot])
                j--;
            if(i < j)
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }

        aux = x[pivot];
        x[pivot]= x[j];
        x[j] = aux;
        QuickSort(x,n,j-1);
        QuickSort(x,j+1,n2);
    }
}