#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter = 'a';

	for (letter == 'a'; letter <= 'z'; letter++)
		putchar(letter);
	while (letter == 'q'|| letter == 'e')
		putchar(letter+1);
	return (0);
}
