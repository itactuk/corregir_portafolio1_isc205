//
// Created by diego on 7/10/2019.
//

void invertir(int op,int x[][10],int i,int j,int c)
{
    int aux,med;

    switch(op)
    {
        case 1:
        {
            med = (c + (j-1)) / 2;

            if(i == 0)
            {
                return;
            }
            else if(c == med || (j-1) == med)
            {
                    aux = x[i-1][c];
                    x[i-1][c] = x[i-1][j - 1];
                    x[i -1][j-1] = aux;

                invertir(op,x,i-1,j + c,0);
                return;
            }
            else if(c != med && j != med)
            {
                    aux = x[i-1][c];
                    x[i-1][c] = x[i-1][j - 1];
                    x[i -1][j-1] = aux;

                invertir(op,x,i,j-1,c + 1);
                return;
            }

        }
        case 2:
        {
            med = (c + (i-1)) / 2;

            if(j == 0)
            {
                return;
            }
            else if(c == med || (i-1) == med)
            {
                aux = x[c][j-1];
                x[c][j-1] = x[i-1][j-1];
                x[i -1][j-1] = aux;

                invertir(op,x,i + c,j-1,0);
                return;
            }
            else if(c != med && (i-1) != med)
            {
                aux = x[c][j - 1];
                x[c][j-1] = x[i-1][j - 1];
                x[i -1][j-1] = aux;

                invertir(op,x,i - 1,j,c + 1);
                return;
            }
        }
        default:
        {
            return;
        }
    }
}
