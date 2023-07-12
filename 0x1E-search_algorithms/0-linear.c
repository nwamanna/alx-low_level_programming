#include "search_algos.h"
/**
*linear_search - searches for a value in an array of integers using the Linear search algorithm
*@array: pointer to the first element of the list
*@size: size of the array
*@value: number to be search for
*
*Return: index of value or -1 if value is not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
		return -1;
	for (i=0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, value);
		if (*array == value)
		{
			return i;
		}
		array++;
	}
	return -1;
}
