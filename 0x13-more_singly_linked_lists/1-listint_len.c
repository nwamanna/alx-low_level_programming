#include "lists.h"
/**
*listint_len - prints elements in a list
*@h: pointer to the first node
*
*Return: count of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
