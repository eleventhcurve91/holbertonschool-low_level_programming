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
				printf("%d", y);
			}
			else if(y > 9)
			{
				printf("%d", (y / 10));
				printf("%d", (y % 10));
			}
	x++;	}
	_putchar(10);
	}
}
