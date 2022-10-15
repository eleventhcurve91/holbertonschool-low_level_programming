#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			xy = x * y;
			if (y == 0)
			{
				_putchar(xy + '0');
			}
			else if (xy <= 9 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(xy + '0');
			}
			else if (xy >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((xy / 10) + '0');
				_putchar((xy % 10) + '0');
			}
		}
	_putchar(10);
	}
}
