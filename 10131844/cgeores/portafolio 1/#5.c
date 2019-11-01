#include <stdio.h>
#include <stdlib.h>

void imprimir(int [],int);
void inverso(int [],int);

int main()
{
	int aray[] = {1,2,3,4,5,6,7};
	int a = sizeof(aray)/sizeof(aray[0]);

    imprimir(aray,a);
    printf("\n");
	inverso(aray,a);
	imprimir(aray,a);

	return 0;
}

void imprimir(int aray[],int a)
{
	int i;
	for (i=0;i<a;i++)
    {
		printf("%d ",aray[i]);
	}
}

void inverso(int aray[],int a)
{
	int i,n[a];

	for (i=0;i<a;i++)
    {
		n[a-1-i] = aray[i];
	}

	for (i=0;i<a;i++)
    {
		aray[i] = n[i];
	}
}
