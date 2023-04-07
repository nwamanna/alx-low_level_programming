#include "hash_tables.h"
/**
*key_index - gives index of the key on the hashtable
*@key: the key of the value
*@size: the size of the array of the hash table
*
*@Return: the index of the array on the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
