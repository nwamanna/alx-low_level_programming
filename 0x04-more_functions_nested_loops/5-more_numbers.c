#include "main.h"
#include <stdio.h>
/**
*more_numbers - print numbers from 1 -14
*
*Return: void
*/
void more_numbers(void)
{
	int k = 0;
	int x;

	while (k < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			x++;
		}
		k++;
	}
}
