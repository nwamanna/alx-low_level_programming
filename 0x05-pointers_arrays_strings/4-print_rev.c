#include <stdio.h>
#include "main.h"
/**
 * print_rev - value of a to b and b to a
 * @s: pointer to an string
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; s[i] != '\0'; i--)
	{
		char k = s[i];

		_putchar(k);
	}
	_putchar(10);
}
