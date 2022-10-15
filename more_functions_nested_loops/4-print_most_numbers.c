#include "main.h"

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2)
		{
			_putchar(x + '0');
		}
	}
	putchar(10);
}
