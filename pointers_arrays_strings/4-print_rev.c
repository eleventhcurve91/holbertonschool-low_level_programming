#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int x;
	x = strlen(s) - 1;

	while (x >= 0 && *s != '\0'){
	{
		_putchar(s[x]);
	}
	x--;
	}
}
