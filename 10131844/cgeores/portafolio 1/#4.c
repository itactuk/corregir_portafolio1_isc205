#include <stdio.h>
#include <stdlib.h>

void reverse();

int main()
{
	printf("digite un texto\n");
	reverse();
	printf("\n");
	return 0;
}

void reverse ()
{
    char a = getchar();
	if (a=='\n')
		return;
	else
    {
		reverse();
		//return putchar(a); /*Rosleiry: (-5) aqui retornas una variable con valor en una función void. Con poner putchar(a) sin el return es suficiente
		putchar(a);
	}
}
