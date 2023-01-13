#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_realloc - reallocates memory
*ptr: pointer to old memory size
*@old_size: old memory size
*@new_size: new memory size
*
*Return: Void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}


