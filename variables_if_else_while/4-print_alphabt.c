#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	if (letter == 'q' || letter == 'e')
		letter++;
		putchar(letter);
	return (0);
}
