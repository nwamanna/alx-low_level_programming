#include <stdio.h>
/**
 * main - print int
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	for (i; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
