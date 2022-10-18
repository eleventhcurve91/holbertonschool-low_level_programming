#include <stdio.h>
#include "main.h"

/**
 * _puts - check the code
 * @str: char to check
 * Return: Always 0 (Succes).
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}
