#include "main.h"

void more_numbers(void)
{
	int x = 0;
	int y;
	char number[] = {0,1,2,3,4,5,6,7,8,9,1,0,1,1,1,2,1,3,1,4};
	
	while(x < 10)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(number[y]);
		}
		x++;
		_putchar(10);
	}
}
