#include <stdio.h>
/**
 * main - this programm prints alphabets in reverse
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'z';

	for (c; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
