#include "lists.h"
/**
*insert_dnodeint_at_index - inserts node at index
*@h: pointer to pointer
*@idx: index
*@n: data to be inserted
*
*Return: return address of node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp, *holder;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->next = NULL;
	ptr->n = n;
	ptr->prev = NULL;
	temp = *h;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
		return (NULL);
	if (temp->next == NULL)
	{
		temp->next = ptr;
		ptr->prev = temp;
	}
	else
	{
		holder = temp->next;
		temp->next = ptr;
		holder->prev = ptr;
		ptr->next = holder;
		ptr->prev = temp;
	}
	return (*h);
}







	
