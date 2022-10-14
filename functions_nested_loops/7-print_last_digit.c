#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @d: int to check
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	int x;

	x = d % 10;

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
	return (0);
}
