#include "hash_tables.h"
/**
*hash_table_delete - deletes a hash table
*@ht: hashtable
*
*Return: Void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	hash_node_t *temp;

	if (ht == NULL)
	{
		exit(98);
	}
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr == NULL)
			continue;
		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = temp;
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
