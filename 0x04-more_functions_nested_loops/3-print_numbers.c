#include <stdio.h>
#include "main.h"
/**
*print_numbers -This function prints natural numbers
*
*Return: 0 if successful
*/
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
