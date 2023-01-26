#include "lists.h"
/**
*add_node - adds element to the beginning
*@head: pointer pointer to the head
*@str: string parameter
*
*Return: Return number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *first = *head;
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr->next = first;
	first = ptr;
	*head = ptr;
	if (first != NULL)
	{
		return (first);
	}
	else
	{
		return (NULL);
	}
}

