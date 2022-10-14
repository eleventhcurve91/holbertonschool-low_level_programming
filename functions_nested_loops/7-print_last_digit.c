#include "main.h"

int print_last_digit(int d)
{
	if (d <= 0)
	{
		d -= d % 10;
	}
	printf("%d%d", x/10, d);
}
