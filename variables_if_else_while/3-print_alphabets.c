#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter, upper;

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	if (letter == 'z')
		for (upper = 'A'; upper <= 'Z'; upper++)
			putchar(upper);
	return (0);
}
