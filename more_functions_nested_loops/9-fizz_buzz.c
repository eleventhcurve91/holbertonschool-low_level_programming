#include "main.h"

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
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
		else
		{
			printf("%d ", x);
		}
	}
	return (0);
}
