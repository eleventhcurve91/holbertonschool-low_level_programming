#include "main.h"

int main(void)
{
	int x;
	char letter[8] = "_putchar";

	for (x = 0; x <= 7; x++)
		_putchar(letter[x]);
	_putchar(10);
	return (0);
}
