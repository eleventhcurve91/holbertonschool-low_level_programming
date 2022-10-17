#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (x % 5 != 0 && x % 3 != 0)
		{
			printf("%d ", x);
		}
	}
	putchar(10);
	return (0);
}
