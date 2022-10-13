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
 * -Write a program that prints the	 |
 * alphabet in lowercase, followed by a	 |
 * new line.				 |
 * -Print all the letters except q and e |
 * =======================================
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
