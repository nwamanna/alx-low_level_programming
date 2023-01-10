#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*_concat - creates and array of chars
*@s1: parameter to be appended to
*@s2: string toappend
*
*Return: pointer to new allocaated memory or null if it fails
*/
char *str_concat(char *s1, char *s2);
{
	unsigned int len = strlen(s1) + strlen(s2) + 1;
	char *arr = (char *) malloc(len);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	arr = strcat(s1,s2);
	return (arr)
}
