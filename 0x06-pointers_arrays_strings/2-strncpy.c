#include <stdio.h>
#include <string.h>
/**
*_strncpy - copy one string
*@dest: first parameter
*@src: second parameter
*@n: integer
*
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int length = strlen(src);
	int i = 0;

	while (i < n && *src)
	{
		dest[i] = *(src + i);
		i++;
	}
	if (i == length)
		dest[i] = '\0';
	else
		dest[len - 1] = '\0';
	return (dest);
}
