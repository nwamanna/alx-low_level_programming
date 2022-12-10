#include <stdio.h>
/**
 * main - print combinations
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i <= 8; i++)
	{
		if ((i == j) || (i > j))
		{
			j++;
			while (j <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				if ((i == 8) && (j == 9))
				{
					break;
				}
				putchar(',');
				putchar(' ');
				j++;
			}
			 j = i + 1;

		}

	}
	putchar('\n');
	return (0);
}
