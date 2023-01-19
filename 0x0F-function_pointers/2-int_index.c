#include <stddef.h>
/**
*int_index - function searches for an integer
*@array: pointer to an array
*@size: size of array
*@cmp: pointer to function needed
*
*Return: returns the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp != NULL)
		{
			int val = cmp(array[i]);

			if (val == 1)
			{
				return (i);
			}
			else
			{
				continue;
				return (-1);
			}
		}
		else
			return (-1);
	}
	return (i);
}
