#include ""main.h"

void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; x <= 9; y++)
		{
			xy = x*b;
			putchar(xy);
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
}
