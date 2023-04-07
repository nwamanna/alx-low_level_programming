#include "hash_tables.h"
/**
*hash_table_get - retrieves an element from the hash table
*@ht: hash table
*@key: key of value, can't be empty
*
*Return: Value of key or NULL if key is not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr2;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	ptr2 = ht->array[index];
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	if (strcmp(ptr2->key, key) == 0)
		return (ptr2->value);
	while (ptr2->next != NULL)
	{
		if (strcmp(ptr2->key, key) == 0)
		{
			return (ptr2->value);
		}
	}
	return (NULL);
}
