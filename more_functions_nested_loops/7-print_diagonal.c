#include "main.h"

/**
 * print_diagonal - check the code
 * @n: int to check
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
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
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
