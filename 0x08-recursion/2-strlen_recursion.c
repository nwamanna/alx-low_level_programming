#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - counts number of letters in a string
*@s: the pointer to the string
*
*Return: integer, number of lettersin a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
