#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int value;

	for (value = 0; value <= 9; value++)
	{
		putchar((value % 10) + '0');
		if (value == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
