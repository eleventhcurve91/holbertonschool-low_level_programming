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
 * -Write a program that prints all single |
 * digit numbers of base 10 starting	   |
 * from 0, followed by a new line.	   |
 * -You are not allowed to use any variable|
 * of type char				   |
 * -All your code should be in the main	   |
 * function				   |
 * =========================================
 */
int main(void)
{
	int number = 47;

	while (number <= 56)
	{
		number++;
		putchar(number);
	}
	putchar('\n');
	return (0);
}
