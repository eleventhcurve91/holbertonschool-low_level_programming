#include "main.h"

/**
 * print_line - check the code
 * 
 * @n: int to check 
 * 
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	if (n <= 0 || x <= n)
	{
		_putchar('\n');
	}
}
