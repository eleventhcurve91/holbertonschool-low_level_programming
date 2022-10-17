#include "main.h"

void print_square(int size)
{
	int x;

	for (x = 0;x < size;x++)
	{
		_putchar('#');

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
