#include "main.h"

void more_numbers(void)
{
	int x = 0;
	int y;
	
	while(x < 10)
	{
		for (y = 0; y <= 15; y++)
		{
			if (y <= 9)
			{
				_putchar(y + '0');
			}
			if(y >= 10)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			if else(y == 15)
				y = - 43;
		}
		x++;
	}
}
