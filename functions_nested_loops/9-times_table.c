#include "main.h"

void times_table(void)
{
	int x, y;
	char xy

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; x <= 9; y++)
		{
			xy = x*y;
			putchar(xy + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
}
