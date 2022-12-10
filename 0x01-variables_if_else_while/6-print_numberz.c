#include <stdio.h>
/**
 * main - print int
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
