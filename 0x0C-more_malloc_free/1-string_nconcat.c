#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - concatates n amount of bytes to s1
*@s1: first string
*@s2: second string to be appended
*@n: number of bytes
*
*Return: pointer to newly allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *p = malloc(len1 + n + 1);

	if (n >= len2)
	{
		n = strlen(s2);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strncpy(p + len1, s2, n);
	p[len1 + n] = '\0';
	return (p);
}
