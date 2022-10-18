#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	char dato;
	dato = s;
	strrev(dato);

	printf("%s", dato);
}
