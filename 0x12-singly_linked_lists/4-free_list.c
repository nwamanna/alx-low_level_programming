#include "lists.h"
/**
*free_list - adds element to the beginning
*@head: pointer pointer to the head
*
*Return: Return number of nodes
*/
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		list_t *next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
	head = NULL;
}
