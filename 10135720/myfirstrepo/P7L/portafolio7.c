


int sumar_matriz(int matriz[][4], int felemento,int ielemento, int numero){


    if (felemento<1)

        return 0;

    if (ielemento==1)

        return  matriz[felemento - 1][ielemento - 1] + sumar_matriz(matriz,felemento-1,ielemento = numero,numero) ;

    if (ielemento > 1)

        return   matriz[felemento-1][ielemento-1] + sumar_matriz(matriz,felemento,ielemento-1,numero );
}