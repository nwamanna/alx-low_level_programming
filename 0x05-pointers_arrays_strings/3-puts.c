#include <stdio.h>
#include "main.h"
/**
 * _puts - value of a to b and b to a
 * @str: pointer to an string
 *
 * Return: Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char k = str[i];

		_putchar(k);
	}
	_putchar(10);
}
