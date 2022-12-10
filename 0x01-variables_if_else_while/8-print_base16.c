#include <stdio.h>
/**
 * main - print hexadecimals
 *
 * Return: 0 if succesful
 */
int main(void)
{
	char i;
	char k;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (k = 'a'; k <= 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
