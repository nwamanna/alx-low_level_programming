#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print alpabet ten times
*
*Return: void if successful
*/

void print_alphabet_x10(void)
{
	int p = 0;

	while (p < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar(10);
		p++;
	}
}
