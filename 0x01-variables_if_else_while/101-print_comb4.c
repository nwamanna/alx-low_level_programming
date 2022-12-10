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
	int k = 0;

	for (i = 0; i <= 7; i++)
	{
		if ((i == j) || (i > j))
		{
			j++;
			while (j <= 8)
			{
				k = j + 1;
				while (k <= 9)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i == 7) && (j == 8))
					{
						break;
					}
					putchar(',');
					putchar(' ');
					k++;
				}
				j++;
			}
			 j = i + 1;

		}

	}
	putchar('\n');
	return (0);
}
