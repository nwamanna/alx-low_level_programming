#include <stdio.h>
#include "main.h"
/**
*print_diagonal - print line diagonally
*@n: parameter
*
*Return: Void
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);

}
