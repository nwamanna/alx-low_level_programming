#include <stdio.h>
/**
 * main - prints out numbers
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
