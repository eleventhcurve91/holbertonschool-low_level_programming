#include "main.h"

int print_last_digit(int d)
{
	int x;

	x = n % 10;

	if (d <= 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
