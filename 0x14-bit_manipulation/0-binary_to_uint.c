#include "main.h"
/**
*binary_to_uint - converts binary to int
*@b: pointer to string
*
*Return: number or 0 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len;
	int i;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		unsigned int num;

		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = b[i] - '0';

		sum +=  num * (1 << len);
		len--;
	}
	return (sum);
}
