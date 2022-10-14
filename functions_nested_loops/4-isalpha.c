#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 *
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, Returns 0 otherwise
 *
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
