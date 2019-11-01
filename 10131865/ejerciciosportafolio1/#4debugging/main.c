#include <stdio.h>
#include <stdlib.h>

void reverse ();

int main(){

//	char palabra [80];

	printf ("Entre una cadena\n");
	//gets(palabra);
//	printf ("La cadena invertida es\n");
	reverse ();
	printf ("\n");
	return 0;
}

void reverse (){
    char c = getchar();
	if (c=='\n')
		return;
	else{
		reverse ();
		putchar (c);
	}
}
