#include <stdio.h>
#include "main.h"
/**
*puts_half- prints the second half of string
*@str: string to be printed
*/
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = (i - 1) / 2;

	for (k = j + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
