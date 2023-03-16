#include "lists.h"
/**
*sum_dlistint - gets the node at an index
*@head: pointer to list
*
*Return: sum of elements in a list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
