

int bbinaria(int x[],int ii,int iu,int c)
{
    int med;
    med =  (ii + iu) / 2;

    if(ii > iu)
    {
        return -1;
    }
    else if(c == x[med])
    {
        return med;
    }
    else if(ii == iu -1)
    {
        return -1;
    }
    else if(c > x[med])
    {
        return bbinaria(x,med,iu,c);
    }
    else if(c < x[med])
    {
        return bbinaria(x,ii,med,c);
    }
}