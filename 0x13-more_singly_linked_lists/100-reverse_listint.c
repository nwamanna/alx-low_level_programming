#include "lists.h"
/**
*delete_nodeint_at_index - gets the node at an index and deletes it
*@head: pointer to pointer
*
*Return: node at the index
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	if (head == NULL)
	{
		exit(98);
	}
	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);
}


	
