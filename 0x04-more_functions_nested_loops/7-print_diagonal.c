#include <stdio.h>
#include "main.h"
/**
*print_line - print line the number of times inputed
*
*Return: Void
*/
void print_line(int n)
{
	int i = n;

	while (i > 0)
	{
		_putchar(92);
		_putchar(10);
		i++;
	}
	_putchar(10);
}
