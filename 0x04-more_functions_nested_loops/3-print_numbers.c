#include "main.h"
#include <stdio.h>
/**
*print_numbers -This function prints natural numbers
*
*Return: 0 if successful
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
