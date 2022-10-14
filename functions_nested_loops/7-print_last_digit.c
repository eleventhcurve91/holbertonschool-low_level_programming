#include "main.h"

int print_last_digit(int d)
{
	if (d <= 0)
	{
		d -= d % 10;
	}
	return (d);
}
