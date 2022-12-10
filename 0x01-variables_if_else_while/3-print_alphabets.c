#include <stdio.h>
/**
 * main - prints both capital and small letters
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	for (c; c <= 'z'; c++)
		putchar(c);
	for (C; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}

