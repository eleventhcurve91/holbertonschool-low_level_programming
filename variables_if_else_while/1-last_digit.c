#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting program
 * Return: Always 0 (Succes)
 * =======================================
 * Autor: Carlos Alfonso Bustos Olaya	 |
 * =======================================
 * ************Description****************
 * =======================================
 * -if the last digit of n is greater	 |
 * than 5: the string and is greater	 |
 * than 5				 |
 * -if the last digit of n is 0:	 |
 * the string and is 0			 |
 * -if the last digit of n is less than 6| 
 * and not 0: the string and is less	 |
 * than 6 and not			 |
 * =======================================
 */
int main(void)
{
	int n, rdm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rdm = n;
	n %= 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", rdm, n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", rdm, n);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", rdm, n);
	return (0);
}
