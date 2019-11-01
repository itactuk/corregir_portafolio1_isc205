//
// Created by diego on 20/9/2019.
//


void esprimo(int arreglo[],int x)
{
    int j,k,c,count;
    count = 0;

        for(j = 2;j > 1;j++)
        {
            c = 0;
            for(k = 2;k < j;k++)
            {
                if(j % k == 0)
                {
                    c = 1;
                    break;
                }
            }


            if(c == 0)
            {
                arreglo[count] = j;
                count++;
            }
            else if(count == x)
            {
                break;
            }
        }
}