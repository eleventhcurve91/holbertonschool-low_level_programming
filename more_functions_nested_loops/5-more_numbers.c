#include "main.h"

void more_numbers(void)
{
	int x = 0;
	int y;

		for (y = 0; y <= 14; y++)
		{
			if (y < 10)
			{
				_putchar(y);
			}
			else if(y > 9)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
	x++;
}
