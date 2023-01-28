#include "lists.h"
/**
*free_list - adds element to the beginning
*@head: pointer pointer to the head
*
*Return: Return number of nodes
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(temp->str);
		free(head);
		head = temp;
	}
}

