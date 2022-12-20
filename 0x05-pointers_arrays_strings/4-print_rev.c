#include <stdio.h>
#include"main.h"
/**
*print_rev - reverse the string
*@s: parameter string
*/
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
