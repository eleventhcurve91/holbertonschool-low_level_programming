#include "main.h"

void print_square(int size)
{
	int x, y;

	for (y = 0;y < size;y++)
	{
		_putchar('#');

		for (x = 0;x < size;x++)
		{
			putchar('\n');

		}
	}
	if(size <= 0)
	{
		_putchar(10);
	}
}
