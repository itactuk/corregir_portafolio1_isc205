//
// Created by diego on 4/10/2019.
//


int sumamatriz(int x[][15],int z,int c,int k)
{
    if(z < 1)
    {
        return 0;
    }
    else if(c == 1)
    {
        return x[z-1][c-1] + sumamatriz(x,z-1,k,k);
    }
    else if(c > 1)
    {
        return x[z-1][c-1] + sumamatriz(x,z,c-1,k);
    }
}
