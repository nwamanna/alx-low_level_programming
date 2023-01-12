#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - allocates memmory of nmemb number of elements
*@nmemb: number of elements
*@size: amount of bytes
*
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);
	return (p);
}
