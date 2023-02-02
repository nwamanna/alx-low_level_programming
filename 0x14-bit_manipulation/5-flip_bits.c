#include "main.h"
/**
*flip_bits - flip bits from n to m
*@n: first number
*@m: second number
*
*Return: number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int num;

	num = n ^ m;
	while (num)
	{
		unsigned int bit = num & 1;

		count += bit;
		num = num >> 1;
	}
	return (count);
}
