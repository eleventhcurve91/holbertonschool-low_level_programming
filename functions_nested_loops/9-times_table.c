#include "main.h"

void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; x <= 9; y++)
		{
			xy = x*y;
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}if (x <= 9)
		{
			putchar('$');
		}
	}
	putchar(10);
}
