#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int n = srand() - RAND_MAX / 2;

	n %= 10;
	if(n < 5)
		printf("%d is greater than 5\n", n);
	if(n < 0 && !=0)
		printf("%d is less than 6 and not 0\n", n);
	else
		print("%d is 0: the string", n);
	return (0);
}
