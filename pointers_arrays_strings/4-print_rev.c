#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int x, y;
	x = strlen(s);

	printf("valor de x: %d", x);

	for (y = x; y < 0; y--)
	{
		_putchar(s[y]);
	}
}
