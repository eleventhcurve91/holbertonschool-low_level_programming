#include "main.h"

void more_numbers(void)
{
	int x = 0;
	int y;
	
	while(x < 10)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y < 10)
			{
				printf("%c", y);
			}
			else if(y > 9)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
	}
	_putchar(10);
	x++;
}
