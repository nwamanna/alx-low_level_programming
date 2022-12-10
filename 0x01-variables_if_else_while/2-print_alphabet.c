#include <stdio.h>
/**
 * main - writes small letters
 *
 * Return: 0 if successful
 */
int main(void)
{	char c = 'a';

	for (c; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
