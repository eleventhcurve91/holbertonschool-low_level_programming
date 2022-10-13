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
 * -Write a program that prints all	 |
 * possible combinations of single-digit |
 * numbers.				 |
 * -Numbers must be separated by ,,	 |
 * followed by a space.			 |
 * =======================================
 */
int main(void)
{
	int value;

	for (value = 0; value <= 9; value++)
	{
		putchar((value % 10) + '0');
		if (value == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
