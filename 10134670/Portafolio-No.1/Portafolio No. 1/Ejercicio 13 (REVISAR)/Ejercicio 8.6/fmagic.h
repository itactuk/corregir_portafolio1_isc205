#ifndef FMAGIC_H_INCLUDED
#define FMAGIC_H_INCLUDED

int tmagica (int x)
{
    int y = x, num = 0;
    int magic[x][y];
    int apl[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0 ; j < y; j++)
        {
            num++;
            magic[i][j] = num;

            if (magic[i][j] == 1)
                apl [i][j+1] = magic[i][j];
            if (magic[i][j] == 2)
                apl [i+2][j+1] = magic[i][j];
            if (magic[i][j] == 3)
                apl [i+1][j-2] = magic[i][j];
            if (magic[i][j] == 4)
                apl [i+1][j] = magic[i][j];
            if (magic[i][j] == 5)
                apl [i][j] = magic[i][j];
            if (magic[i][j] == 6)
                apl [i-1][j] = magic[i][j];
            if (magic[i][j] == 7)
                apl [i-1][j+2] = magic[i][j];
            if (magic[i][j] == 8)
                apl [i-2][j-1] = magic[i][j];
            if (magic[i][j] == 9)
                apl [i][j-1] = magic[i][j];
        }
    }
    printf("Tabla Magica 3x3: \n");
    for(int i=0;i<x;i++)
    {
        printf("\n");
        for(int j = 0;j<y;j++)
        {
            printf("\t%d",apl[i][j]);
        }
    }
}




#endif // FMAGIC_H_INCLUDED
