#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' || letter != 'q')
		{
			putchar(letter);
		}else if(letter == 'e')
		{
			putchar(letter+1);
		}
	}
	return (0);
}
