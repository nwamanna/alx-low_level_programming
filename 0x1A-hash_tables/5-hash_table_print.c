#include "hash_tables.h"
/**
*hash_table_print - print keys and values in a hash_table
*@ht: hash_table
*
*Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	int count;
	unsigned long int i;
	hash_node_t *ptr;

	if (ht == NULL)
	{
		printf("{}\n");
		exit(98);
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr == NULL)
			continue;
		count++;
	}
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr == NULL)
			continue;
		printf("'%s': '%s'", ptr->key, ptr->value);
		count--;
		if (count != 0)
			printf(", ");
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			printf("'%s': '%s'", ptr->key, ptr->value);
			printf(", ");
		}
	}
	printf("}\n");
}
