#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rev;

	for (rev = 123; rev <= 96; rev--)
	{
		rev--;
		putchar(rev);
	}
	return (0);
}
