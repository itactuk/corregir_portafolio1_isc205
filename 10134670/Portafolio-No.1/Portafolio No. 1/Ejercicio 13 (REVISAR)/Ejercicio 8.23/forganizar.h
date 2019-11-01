#ifndef FORGANIZAR_H_INCLUDED
#define FORGANIZAR_H_INCLUDED


char organizar_letras (int numl)

{
    char arr[numl], letra, ax;
    for (int i=0; i<numl; i++)
        {
            letra = 'A'+ ( rand() % ('Z' - 'A') );
            arr[i] = letra;
        }
        printf("Letras Desordenadas: \n");

        for ( int i = 0 ;i < numl; i++)
                printf("%c",arr[i]);
        printf("\nLetras Ordenadas: \n");
        for ( int i = 0 ; i < numl; i++)
        {
            if (arr[i+1] <= arr[i])
            {
                ax = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = ax;
            }if (arr[i] <= arr [i+1])
                ax = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = ax;
        }

        for ( int i = 0 ;i < numl; i++)
            printf("%c",arr[i]);
}


#endif // FORGANIZAR_H_INCLUDED
