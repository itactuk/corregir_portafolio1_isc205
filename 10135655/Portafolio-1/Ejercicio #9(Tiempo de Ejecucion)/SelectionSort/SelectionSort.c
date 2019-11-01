//
// Created by diego on 8/10/2019.
//

int SelectionSort(int x[],int n)
{
    int i, j, pos, aux;

    for (i = 0; i < (n - 1); i++)
    {
        pos = i;

        for (j = i + 1; j < n; j++)
        {
            if (x[pos] > x[j])
                pos = j;
        }
        if (pos != i)
        {
            aux = x[i];
            x[i] = x[pos];
            x[pos] = aux;
        }
    }
}
