#include "lists.h"
/**
*get_nodeint_at_index - gets the node at an index
*@head: pointer to list
*@index: parameter specfying index
*
*Return: node at the index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	listint_t *current;

	if (temp == NULL)
		return (NULL);
	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	current = temp;
	if (current != NULL)
		return (current);
	else
		return (NULL);
}
