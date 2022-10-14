#include "main.h"

/**
 * main - Write a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int x;
	char letter[8] = "_putchar";

	for (x = 0; x <= 7; x++)
		_putchar(letter[x]);
	_putchar(10);
	return (0);
}
