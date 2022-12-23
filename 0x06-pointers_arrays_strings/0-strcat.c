#include <stdio.h>
/**
* _strcat - concates two strings
*@dest: first parameter
*@src: second parameter
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int len, length, i, k;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = dest[i];
	}
	for (k = 0; k <= length; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}
