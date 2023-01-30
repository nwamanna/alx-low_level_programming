#include "lists.h"
/**
*print_listint - prints elements in a list
*@h: pointer to the first node
*
*Return: count of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
