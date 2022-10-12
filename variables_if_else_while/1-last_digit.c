#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * man - init program
 * return: 0 (succes) 
 */
int main(void)
{
	int rdm;

	srand(time(0));
	int n = rand() - RAND_MAX / 2;

	n %= 10;
	if(n > 5)
		printf("the last digit of %d is greater than 5\n", n);
	if(n < 6 && n != 0)
		printf("the last digit of %d is less than 6 and not 0\n", n);
	else
		printf("the last digit of %d is 0", n);
	return (0);
}
