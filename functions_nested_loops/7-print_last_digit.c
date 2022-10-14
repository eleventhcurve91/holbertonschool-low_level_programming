#include "main.h"

int print_last_digit(int d, x)
{
	if (d <= 0)
	{
		x = d;
		d -= d % 10;
	}
	printf("%d%d", x/10, d);
}
