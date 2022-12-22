#include <stdio.h>
#include <string.h>
/**
* _strcmp - compare strings
*@s1: first string
*@s2: second string
*
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int k = s1[i];
	int l = s2[i];
	int diff = k - l;

	return (diff);
}
