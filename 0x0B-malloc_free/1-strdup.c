#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*strdup - returns a pointer to a newly allocated space in memory
*@str: pointer parameter
*
*Return: pointer to newly allocated space or null if it fails
*/
char *_strdup(char *str)
{
	unsigned int i = 0;
	int length = strlen(str) + 1;
	char *word = (char *) malloc(length);

	strcpy(word, str);
	if (str ==  NULL)
	{
		printf("cant allocate %ld bytes after %d calls\n", sizeof(char) * strlen(str), i);
		return (NULL);
	}
	free(word);
	return (word);
}
