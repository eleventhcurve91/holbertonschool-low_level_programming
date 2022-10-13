#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' || letter != 'e')
			putchar(letter);
	return (0);
}
