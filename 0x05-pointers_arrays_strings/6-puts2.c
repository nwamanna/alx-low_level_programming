#include <stdio.h>
#include "main.h"
/**
*puts2 - print even elements
*@str: string parameter
*/
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar(10);
}
