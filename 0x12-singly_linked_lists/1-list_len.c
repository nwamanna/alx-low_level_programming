#include "lists.h"
/**
*list_len - list number of elements
*@h: pointer to the head
*
*Return: Return number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		exit(98);
	}
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

