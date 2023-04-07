#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table
*@key: key of value, can't be empty
*@value: value of key, can e an empty string
*Return: 1 on success else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr = malloc(sizeof(hash_node_t));
	hash_node_t *ptr2;
	unsigned long int index;

	if (ptr == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	ptr->key = malloc(strlen(key) + 1);
    ptr->value = malloc(strlen(value) + 1);
	strcpy(ptr->key, key);
	strcpy(ptr->value, value);
	ptr->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	ptr2 = ht->array[index];
	if (ptr2 == NULL)
	{
		ht->array[index] = ptr;
		return (1);
	}
	while (ptr2 != NULL)
	{
		if (strcmp(ptr2->key, key) ==0)
		{
			free(ptr2->value);
			strcpy(ptr2->value, value);
			return (1);
		};
		ptr2 = ptr2->next;
	}
	ptr->next = ht->array[index];
	ht->array[index] = ptr;
	return (1);
}
