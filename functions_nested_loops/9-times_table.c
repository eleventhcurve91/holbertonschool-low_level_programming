#include "main.h"

void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; x <= 9; y++)
		{
			xy = x*y;
		}
		if (xy == 0)
		{
			_putchar(xy +'0');
		}
		if (xy < 10 && j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(xy + '0');
		}
	}
	putchar(10);
}
