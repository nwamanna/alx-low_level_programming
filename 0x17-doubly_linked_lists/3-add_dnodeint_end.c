#include "lists.h"
/**
*add_dnodeint_end - adds a node at the end of the list
*@head: pointer to head pointer
*@n: integer data to be inserted
*
*Return: pointer to new node or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *tp = *head;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	if (tp != NULL)
	{
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = ptr;
		ptr->prev = tp;
		return (*head);
	}
	else
	{
		*head = ptr;
		return (*head);
	}
	return (*head);
}
