#include "main.h"
#include <stdio.h>
/**
*print_most_numbers -This function prints natural numbers
*
*Return: 0 if successful
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(10);
}
