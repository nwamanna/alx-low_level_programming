#include "main.h"
/**
*get_bit - get bit at particular index
*@n: number
*@index: the position of bit
*
*Return: bit or -1 if not successful
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int num, bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	num = n >> index;
	bit = num & 1;
	return (bit);
}
