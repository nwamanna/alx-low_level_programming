#include "main.h"
/**
*clear_bit - sets the value of a bit to 0
*@n: pointer to number
*@index: position
*
*Return: 0 if successful -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int a;
	int b;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	a = ~(1 << index);
	b = *n & a;
	*n = b;
	return (0);
}
