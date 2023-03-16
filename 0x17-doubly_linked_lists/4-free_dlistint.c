#include "lists.h"
/**
*free_dlistint - frees memory the list
*@head: pointer to list
*
*Return: pointer to new node or NULL if failed
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
