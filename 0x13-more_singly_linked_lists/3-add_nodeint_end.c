#include "lists.h"
/**
*add_nodeint_end - adds node at the end of thelist
*@head: pointer to the pointer
*@n: integer parametre
*
*Return: address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first = *head;
	listint_t *ptr;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			free(*head);
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	while (first->next != NULL)
	{
		first = first->next;
	}
	first->next = ptr;
	if (first != NULL)
		return (ptr);
	else
		return (NULL);
}
