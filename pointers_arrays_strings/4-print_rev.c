#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line.
 * @s: char to check
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int x;

	x = strlen(s) - 1;

	while (x >= 0 && *s != '\0'){
	{
		_putchar(s[x]);
	}
	x--;
	}
}
