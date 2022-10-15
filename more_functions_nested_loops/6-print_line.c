#include "main.h"

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
