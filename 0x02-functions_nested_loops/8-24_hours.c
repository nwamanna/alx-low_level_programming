#include <stdio.h>
#include "main.h"
/**
*jack_bauer - print time
*
*Return: nothing
*/
void jack_bauer(void)
{
	int i = 48;

	while (i < 51)
	{
		int j = 48;

		while (j < 58)
		{
			int k = 48;

			while (k < 54)
			{
				int l = 48;

				while (l < 58)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar(10);
					l++;
				}
				k++;
			}
			if ((i == 50) && (j == 51))
				break;
			j++;
		}
		i++;
	}
}
