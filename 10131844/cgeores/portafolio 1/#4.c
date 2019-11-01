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
		return putchar(a);
	}
}
