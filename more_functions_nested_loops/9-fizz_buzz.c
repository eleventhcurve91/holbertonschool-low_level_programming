#include "main.h"

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		if (x % 3 && x % 5)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
	}
	return (0);
}
