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

	if (min == 0)
	{
		cal = max - min;
	}
	if (min > max)
	{
		return (NULL);
	}
	if (min == 0 && max == 0)
	{
		return (NULL);
	}
	if (min < 0 || max < 0)
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
		p[i] = min + i;
	}
	return (p);
}


