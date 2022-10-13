#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting program
 * Return: Always 0 (Succes)
 * =======================================
 * Autor: Carlos Alfonso Bustos Olaya	 |
 * =======================================
 * ************Description****************
 * =======================================
 * Write a program that prints all single|
 * digit numbers of base 10 starting	 |
 * from 0, followed by a new line.	 |
 * =======================================
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
