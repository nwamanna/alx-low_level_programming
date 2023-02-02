#include "main.h"
/**
*print_binary - prints base 2
*@n:number parameter
*
*Return: Void
*/
void print_binary(unsigned long int n)
{
	char c;

	if (n == 0)
	{
		c = 0 + '0';
		_putchar(c);
	}
	else
	{
		if (n > 1)
		{
			print_binary(n >> 1);
		}
		c = (n & 1) + '0';
		_putchar(c);
	}
}
