//
// Created by diego on 8/10/2019.
//


int BubbleSort(int x[],int n)
{
    int i,j,aux;

    for (i = 0 ; i < n - 1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (x[j] > x[j+1])
            {
                aux  = x[j];
                x[j] = x[j+1];
                x[j+1] = aux;
            }
        }
    }

}