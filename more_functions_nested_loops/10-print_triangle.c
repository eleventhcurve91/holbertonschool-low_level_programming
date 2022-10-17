#include "main.h"

/**
 * print_triangle - check the code
 * @size: int to check
 * Return: Always 0.
 */
void print_triangle(int size)
{

	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
