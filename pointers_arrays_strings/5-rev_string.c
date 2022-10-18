#include "main.h"

void rev_string(char *s)
{
	int x;
	x = strlen(s);

	while (x < 0)
	{
		_putchar(s[x]);
	}
	x++;

	while (x > 0)
	{
		_putchar(s[x]);
	}
	x--;
}
