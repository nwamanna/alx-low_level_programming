#include <stdio.h>
/**
 * main - print hexadecimals
 *
 * Return: 0 if succesful
 */
int main(void)
{
	char i = '0';
	char k = 'a';

	for (i; i <= '9'; i++)
		putchar(i);
	for (k; k <= 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
