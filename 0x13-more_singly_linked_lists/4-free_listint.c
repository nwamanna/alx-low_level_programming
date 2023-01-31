#include "lists.h"
/**
*free_listint - adds node at the end of thelist
*@head: pointer to the pointer
*
*Return: address of new node
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		listint_t *prev = temp->next;

		free(temp);
		temp = prev;
	}
}


