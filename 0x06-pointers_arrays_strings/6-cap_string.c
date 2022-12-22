#include <stdio.h>
/**
* cap_string - capitaize the next word
*@s: string parameter
*
*Return: s
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 9 && s[i] <= 47) && s[i] != 45)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
