#include <stdio.h>
/**
 * main - possible combinations
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int i = 0;

	for (i; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
