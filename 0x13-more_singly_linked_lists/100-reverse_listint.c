#include "lists.h"
/**
*reverse_listint - reverses te link
*@head: pointer to pointer
*
*Return: head pointer
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
