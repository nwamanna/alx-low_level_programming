#include <stdio.h>
#include"main.h"
/**
*rev_string - reverse the string
*@s: parameter string
*/
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char x1;
	char x2;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	j = i - 1;
	k = 0;

	while (j > k)
	{
		x1 = s[k];
		x2 = s[j];
		s[k] = x2;
		s[j] = x1;
		j--;
		k++;
	}
}
