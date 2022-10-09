#include <stdio.h>

/**
 * main - Starting program
 * Return: Always 0 (Succes)
 *
 */
int main(void)
{
	printf("Size of a char: %d",(sizeof(char), "bytes(s)\n"));
	printf("Size of an int: %d", sizeof(int), "bytes(s)\n");
	printf("Size of a long int: %d ", sizeof(long int), "bytes(s)\n");
	printf("Size of a float: %d", sizeof(float), "bytes(s)\n");
	return (0);
}
