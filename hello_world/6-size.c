#include <stdio.h>

/**
 * main - Starting program
 * Return: Always 0 (Succes)
 *
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d ", sizeof(long int), "bytes(s)\n");
	printf("Size of a float: %d", sizeof(float), "bytes(s)\n");
	return (0);
}
