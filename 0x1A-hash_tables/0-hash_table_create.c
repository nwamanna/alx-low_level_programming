#include "hash_tables.h"
/**
*hash_table_create - create a hash table with size of array size
*@size: size of array
*
*Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->size = size;
	ptr->array = malloc(sizeof(hash_table_t) * ptr->size);
	for (i = 0; i < size; i++)
	{
		ptr->array[i] = NULL;
	}
	return (ptr);
}
