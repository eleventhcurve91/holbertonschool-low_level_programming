#include "main.h"

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x >= 0)
		{
			printf("%d", x);
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
	}
	return (0);
}
