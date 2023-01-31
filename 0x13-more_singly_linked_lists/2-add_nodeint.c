#include "lists.h"
/**
*add_nodeint - prints elements in a list
*@h: pointer to the pointer
*@n: integer parametre
*
*Return: count of nodes in the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = first;
	first = ptr;
	*head = ptr;
	
	if (first != NULL)
		return (first);
	else
		return (NULL);
}
