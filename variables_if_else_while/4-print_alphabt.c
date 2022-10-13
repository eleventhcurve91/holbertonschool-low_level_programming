#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter = 'a';

	while (letter == 'a')
		if (letter == 'q' || letter == 'e')
			putchar(letter+1);
	letter++;
	return (0);
}
