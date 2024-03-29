#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*array_range - create an array
*@min: lowest parameter
*@max: highest parameter
*
*Return: integer pointer
*/
int *array_range(int min, int max)
{
	unsigned int i;
	unsigned int cal = (max - min) + 1;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = (int *) malloc(cal * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= cal; i++)
	{
		*(p + 1) = min + i;
	}
	return (p);
}
