#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting program
 * Return: Always 0 (Succes)
 * =========================================
 * Autor: Carlos Alfonso Bustos Olaya	   |
 * =========================================
 * **************Description****************
 * =========================================
 * Write a program that prints the	   |
 * lowercase alphabet in reverse, followed |
 * by a new line.			   |
 * =========================================
 */
int main(void)
{
	int letter = 123;

	while (letter > 97)
	{
		letter--;
		putchar(letter);
	}
	putchar(10);
	return (0);
}
