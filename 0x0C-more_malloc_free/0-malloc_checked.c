#include <stdio.h>
/**
*malloc_checked - allocates amount of byte using malloc
*@b: integer parameter
*
*Return: Void
*/
void *malloc_checked(unsigned int b)
{
	char *p = malloc(sizeof(int) * b);
	if (p == NULL)
	{
		exit (98);
	}
}q
