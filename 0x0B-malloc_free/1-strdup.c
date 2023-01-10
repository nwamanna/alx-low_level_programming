#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str: pointer parameter
*
*Return: pointer to newly allocated space or null if it fails
*/
char *_strdup(char *str)
{
	unsigned int length = strlen(str) + 1;
	char *word = (char *) malloc(length);

	if (str ==  NULL)
	{
		return (NULL);
	}
	strcpy(word, str);
	free(word);
	return (word);
}
