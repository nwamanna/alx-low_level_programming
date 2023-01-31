#include "lists.h"
/**
*pop_listint - adds node at the end of thelist
*@head: pointer to the pointer
*
*Return: return element of deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *current;
	int store;

	if (temp == NULL)
	{
		return (0);
	}
	current = temp->next;
	store = temp->n;
	free(temp);
	*head = current;
	return (store);
}
