#include <stdio.h>
/**
 * main - prints all albets exept e and q
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	for (c; c <= 'z'; c++)
	{
		if ((c == 'e') || (c == 'q'))
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
