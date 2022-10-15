#include "main.h"

void more_numbers(void)
{
	int x, y;

	while (x < 14)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 10)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}

	}

}
