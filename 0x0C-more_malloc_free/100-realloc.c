#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_realloc - reallocates memory
*@ptr: pointer to old memory size
*@old_size: old memory size
*@new_size: new memory size
*
*Return: Void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
		{
			return (NULL);
		}
	}
	if (new_size > old_size && ptr != NULL)
	{
		newptr = malloc(new_size);
	}
	if (newptr == NULL)
	{
		return (newptr);
	}
	for (i = 0; i < old_size; i++)
	{
		newptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (newptr);
}
