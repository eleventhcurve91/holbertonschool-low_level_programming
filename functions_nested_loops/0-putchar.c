#include <unistd.h>

int main(void)
{
	int _putchar(char c)
	{
	char letter[9] = "_putchar";

	for (int x; x <= 9; x++)
		_putchar(letter[x]);
	return (write(1, &c, 2));
	}
	return (0);
}
