#include <stdio.h>
/**
 * main - possible combinations
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int i;

	for (i = '0'; i <= 9; i++)
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
