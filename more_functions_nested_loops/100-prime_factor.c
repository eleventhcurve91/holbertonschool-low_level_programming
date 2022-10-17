#include <stdio.h>
#include <math.h>

int main(void)
{

	long int number = 612852475143;
	long int pull;
	long int x;
	
	pull = -1;
	while (number % 2 == 0)
	{
		pull = 2;
		number /= 2;
	}
	for (x = 3; x <= sqrt(pull); x = x + 2)
	{
		while (number % x == 0)
		{
		pull = x;
		number = number / x;
		}
	}
	if (number > 2)
	{
		pull = number;
		printf("%ld\n", pull);
		return (0);
	}
	return (0);
}
