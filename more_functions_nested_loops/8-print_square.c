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
	if (x ==  size || x != 0)
	{
		_putchar(10);
	}
	else if(x <= size)
	{
		_putchar(10);
	}
}
