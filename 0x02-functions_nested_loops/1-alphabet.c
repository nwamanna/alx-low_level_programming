#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabets
*
* Return: void if successful
*/

void print_alphabet(void)
/* prints alphabet */
{
	int i = 97;

	for (; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
