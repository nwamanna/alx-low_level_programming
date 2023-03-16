#include "lists.h"
/**
*get_dnodeint_at_index - gets node at index
*@head: pointer to list
*@index: retrive node
*
*Return: Node or NULL if not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	dlistint_t *current;

	if (temp == NULL)
		return (NULL);
	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	current = temp;
	if (current == NULL)
		return (NULL);
	else
		return (current);
}
