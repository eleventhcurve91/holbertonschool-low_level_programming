#include "main.h"

void print_diagonal(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (y == x)
			{
				_putchar('\\');
			}	
			if (y < x)
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}

	if (n < 0)
	{
		_putchar('\n');
	}
}
