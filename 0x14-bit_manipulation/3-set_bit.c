#include "main.h"
/**
*set_bit - sets bits
*@n: the number parameter
*@index: the position
*
*Return: 0 if successful or -1 if failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int a;
	int b;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	a = 1 << index;
	b = *n | a;
	*n = b;
	return (0);
}
