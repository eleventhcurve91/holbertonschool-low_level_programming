#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting program
 * Return: Always 0 (Succes)
 * ====================================
 * Autor: Carlos Alfonso Bustos Olaya |
 * ====================================
 * ***********Description**************
 * ======================================
 * -if the number is greater than 0:	|
 * is positive				|
 * -if the number is 0: is zero		|
 * -if the number is less than 0:	|
 * is negative				|
 * ======================================
 */
int main(void)
{
	int n = rand() - RAND_MAX / 2;

	srand(time(0));
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
