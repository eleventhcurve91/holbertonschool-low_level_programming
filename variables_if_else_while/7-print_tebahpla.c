#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int letter = 123;

	while (letter > 97)
	{
		letter--;
		putchar(letter);
	}
	return (0);
}
