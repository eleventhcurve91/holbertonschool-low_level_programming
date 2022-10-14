#include "main.h"

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; x <= 9; y++)
		{
			putchar((x*y) + '0');
			putchar(',');
			putchar(' ');
		}if (x <= 9)
		{
			putchar('$');
		}
	}
	putchar(10);
}
