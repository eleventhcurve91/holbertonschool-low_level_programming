#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for(hour = '0'; hour <= '24'; hour++)
	{
		for(min = '0'; min <= '59'; min++)
		{
			putchar(hour / 10);
			putchar(hour % 10);
			putchae(':');
			putchar(min /10);
			putchar(min % 10);
			putchar(10);
		}
	}
}
