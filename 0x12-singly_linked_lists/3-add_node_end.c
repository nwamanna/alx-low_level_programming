#include "lists.h"
/**
*add_node_end - adds element to the beginning
*@head: pointer pointer to the head
*@str: string parameter
*
*Return: Return number of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
		{
			free(*head);
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		list_t *first = *head;

		temp = malloc(sizeof(list_t));
		if (temp == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->str = strdup(str);
		if (temp->str == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->len = strlen(str);
		temp->next = NULL;

		if (first == NULL)
		{
			return (NULL);
		}
		while (first->next != NULL)
		{
			first = first->next;
		}
		first->next = temp;
		return (temp);
	}
	return (temp);
}

