#include <stdio.h>
/**
 * main - prints out numbers
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	char i = '0';

	for (i; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
