#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * man - init program
 * return: 0 (succes) 
 */
int main(void)
{
	int n, rdm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	rdm = n;
	n %= 10;
	if(n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", rdm, n);
	else if(n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", rdm, n);
	else if(n == 0)
		printf("Last digit of %d is %d and is 0\n", rdm, n);
	return (0);
}
