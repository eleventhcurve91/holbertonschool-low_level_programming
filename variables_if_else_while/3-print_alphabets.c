#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	if (letter == 'z')
		for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);
	return (0);
}
