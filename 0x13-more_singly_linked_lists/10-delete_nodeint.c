#include "lists.h"
/**
*delete_nodeint_at_index - gets the node at an index and deletes it
*@head: pointer to pointer
*@index: parameter specfying index
*
*Return: node at the index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	if (current == NULL)
		return (1);
	else
		return (-1);
}
