#include "main.h"

void print_square(int size)
{
	int x, y;

	for (y = 0;y < size;y++)
	{
		for (x = 0;x < size;x++)
		{
			putchar('#');

		}
		_putchar(10);
	}
}
