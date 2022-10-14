#include "main.h"

void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			xy = x*y;
			if(xy <= 9)
			{
				_putchar(xy + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if(y <= 9)
			{
				_putchar(' ');
				_putchar((xy / 10) + '0');
				_putchar((xy % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (y == 9)
			{
				_putchar('$');
			}
		}
	_putchar(10);
	}
}
