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
 * Write a program that prints all the	 |
 * numbers of base 16 in lowercase,	 |
 * followed by a new line.		 |
 * =======================================
 */
int main(void)
{
	int hex = 0;

	while (hex < 48)
	{
		if(hex < 10)
		{
			putchar(hex + '0');
		}
		else if(hex > 41)
		{
			putchar(hex - 10 + 'A');
		}
		hex++;
	}
	putchar('\n');

	return (0);
}
