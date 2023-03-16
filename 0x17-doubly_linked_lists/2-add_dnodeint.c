#include "lists.h"
/**
*add_dnodeint - adds a node at the beginning of the list
*@head: pointer to head pointer
@n: integer data to be inserted
*
*Return: pointer to new node or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (ptr);
}
