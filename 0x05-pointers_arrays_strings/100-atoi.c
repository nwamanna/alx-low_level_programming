#include <stdio.h>
/**
* _atoi - converts string to integer
*@s: parameter to be converted
*
*Return: int
*/
int _atoi(char *s)
{
	int symbol = 1;
	int i = 0;
	unsigned int num = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			symbol *= -1;
		}
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	num *= symbol;
	return (num);
}
