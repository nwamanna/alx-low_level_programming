#include "lists.h"
/**
*insert_nodeint_at_index - gets the node at an index
*@head: pointer to list
*@index: parameter specfying index
*
*Return: node at the index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *current;

	if (temp == NULL)
		return (NULL);
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
		return (NULL);
	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = temp->next;
	temp->next = current;
	if (temp->next != NULL)
		return (current);
	else
		return (NULL);
}
