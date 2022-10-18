#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int x = 0;
	x = strlen(s);

	while (x >= 0){
	{
		_putchar(s[x + 1]);
	}
	x--;
	}
}
