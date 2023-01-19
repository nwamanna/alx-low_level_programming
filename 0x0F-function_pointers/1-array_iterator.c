#include <stddef.h>
/**
*array_iterator - executes a function
*@array: array of elements
*@size: number of elements in an array
*@action: pointer to function
*
*Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		if (array != NULL && action != NULL)
		{
			action(array[i]);
		}
	}
}
