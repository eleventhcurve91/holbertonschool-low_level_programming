#include "main.c"

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar('-');
	
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
