#include <stdio.h>
#include <stdlib.h>

int bbin (int arr[],int ii, int iif, int x)

{
    if (ii>iif) return -1;
    if (ii<0) return -1;
    int im = (iif-ii)/2+ii;
    if (x == arr[im]) return im;
    if(x>arr[im]){
        return bbin(arr,im+1,iif,x);
    }
    return bbin(arr,ii,im-1,x);
}


int main()
{
    int i, numds,numinic = 0, numbusc, result;
    printf("introduzca la cantidad de numeros que desea:  \n");
    scanf("%d",&numds);
    int arr[numds];
    for (i = 1; i < (numds+1) ;i++)
    {
        printf("Introduzca el numero %d:  \n", i);
        scanf("%d", &arr[i-1]);
    }
    printf("introduzca de cual numero quiere saber la poscision:  \n");
    scanf("%d", &numbusc);
    result = bbin (arr,numinic,numds-1,numbusc);
    printf("%d", result);

}

