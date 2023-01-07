#include <stdio.h>
#include "main.h"
/**
*_memset: replace characters of a string
*@s: pointer to string
*@b: value to be filled
*@n: number of bytes to be filled
*
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

