#include "lists.h"
/**
*dlistint_len - prints out all elements in a doubly linked list
*@h: pointer to the head
*
*Return: Return number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = NULL;

	if (h == NULL)
	{
		return (count);
	}
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
