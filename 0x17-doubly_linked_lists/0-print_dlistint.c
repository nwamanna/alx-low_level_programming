#include "lists.h"
/**
*print_dlistint - prints out all elements in a doubly linked list
*@h: pointer to the head
*
*Return: Return number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
