#include <stdio.h>
/**
*print_to_98 - print numbers
*@n: parameter
*
*Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
			printf("%d, ", n);
	}
	else
	{
		for (; n > 99; n--)
			printf("%d, ", n);
	}
}
