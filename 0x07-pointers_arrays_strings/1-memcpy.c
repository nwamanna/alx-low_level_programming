#include <stdio.h>
#include "main.h"
/**
*_memcpy: copies memory area to another
*@dest: pointer to string
*@src: value to be filled
*@n: number of bytes to be filled
*
*Return: s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

