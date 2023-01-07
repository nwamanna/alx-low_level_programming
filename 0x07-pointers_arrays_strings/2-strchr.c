#include <stdio.h>
#include "main.h"
/**
*_strchr: replace characters of a string
*@s: pointer to string
*@c: character to be searched for
*
*Return: s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] < '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
	
}


