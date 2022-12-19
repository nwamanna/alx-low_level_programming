#include <stdio.h>
/**
 * swap_int - value of a to b and b to a
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
