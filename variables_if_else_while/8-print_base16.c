#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hex = 0;

	while (hex < 48)
	{
		if(hex < 10)
		{
			putchar(hex + '0');
		}
		else if(hex > 41)
		{
			putchar(hex - 10 + 'A')
		}
		i++;

	}
}
