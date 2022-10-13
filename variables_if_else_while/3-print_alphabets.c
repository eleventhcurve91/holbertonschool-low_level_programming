#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter, upper;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
		for (upper = 'A'; upper <= 'Z'; upper++)
			putchar(upper);
	return (0);
}
