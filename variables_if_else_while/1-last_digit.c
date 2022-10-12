#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * man - init program
 * return: 0 (succes) 
 */
int main(void)
{
	
	int n = rand() - RAND_MAX / 2;

	srand(time(0));
	n %= 10;
	if(n < 5)
		printf("%d is greater than 5\n", n);
	if(n < 0 && n != 0)
		printf("%d is less than 6 and not 0\n", n);
	else
		printf("%d is 0: the string", n);
	return (0);
}
