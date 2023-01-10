#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*create_array - creates and array of chars
*@size: parameter to be multiplied to get size of bytes
*@c: character
*
*Return: pointer to array or null if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = (char *) malloc(sizeof(c) * size);

	if (arr ==  NULL)
	{
		printf("cant allocate %ld bytes after %d calls\n", sizeof(c) * size, i);
		return (NULL);
	}
	for (i = 0; i < (sizeof(c) * size); i++)
	{
		arr[i] = c;
	}
	return (arr);
}
