/**
 * swap_int - check the code
 * @a: check to int pointer
 * @b: check to int pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
