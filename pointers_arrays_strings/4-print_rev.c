#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int x, y;
	x = strlen(s);

	printf("valor de x: %d", x);

	for (y = 7; y < 0; y--)
	{
		printf("%c", s[y]);
	}
}
