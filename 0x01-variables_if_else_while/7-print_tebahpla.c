#include <stdio.h>
/**
 * main - this programm prints alphabets in reverse
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
