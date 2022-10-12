#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * man - init program
 * return: 0 (succes) 
 */
int main(void)
{
	int n,rdm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	rdm = n;
	n %= 10;
	if(n > 5)
		printf("the last digit of %d is %d greater than 5\n", rdm, n;
	if(n < 6 && n != 0)
		printf("the last digit of %d is %d less than 6 and not 0\n", rdm, n);
	else
		printf("the last digit of %d is 0", n);
	return (0);
}
