#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 *
 */
void more_numbers(void)
{
	int x = 0;
	int y;
	int number[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4};

	while (x < 10)
	{
		for (y = 0; y <= 19; y++)
		{
			_putchar(number[y] + '0');
		}
		x++;
		_putchar(10);
	}
}
