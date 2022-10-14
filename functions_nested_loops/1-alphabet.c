#include "main.h"

/**
 * print_alphabet - Write a function that prints
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 *
 */
void print_alphabet(void)
{
	char prey;

	for (prey = 'a'; prey <= 'z'; prey++)
	{
		_putchar(prey);
	}
	_putchar(10);
}
