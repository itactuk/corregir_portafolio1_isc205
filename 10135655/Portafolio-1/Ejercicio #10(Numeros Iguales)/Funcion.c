//
// Created by diego on 9/10/2019.
//

int funcionf(int x)
{
    int result;
    result = 2 * x + 3;
    return result;
}

int funciong(int x)
{
    int result;
    result = 3 * x + 2;
    return result;
}

int numeroigual(int a,int b)
{
    int fa,ga,pfa,pga;

    if(a == b)
    {
        return 0;
    }
    else if(a > b)
    {
        return -1;
    }
    else if(a < b)
    {
        fa = funcionf(a);
        ga = funciong(a);
        pfa = numeroigual(fa,b);
        pga = numeroigual(ga,b);
        if(pga >= 0)
        {
            return pga + 1;
        }
        else if(pfa >= 0)
        {
            return  pfa + 1;
        }
        else
        {
            return -1;
        }
    }
}
