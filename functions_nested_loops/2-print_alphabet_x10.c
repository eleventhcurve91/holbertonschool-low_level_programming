#include "main.h"

/**
 * void print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0 (Succes)
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 0;

		while (b <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		b++;
	_putchar(10);
	}
}
