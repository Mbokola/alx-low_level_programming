#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	int i;

	current = *head;
	if (!(*head))
	{
		*head = malloc(sizeof(list_t));
		if(!(*head))
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = current;
		current = *head;
	}
	else
	{
		for (i = 0; current->next; i++)
			current = current->next;

		current->next = malloc(sizeof(list_t));
		if(!(*head))
                        return (NULL);
		current->next->str = strdup(str);
		current->next->len = strlen(str);
		current->next->next = NULL;
	}
	return (current);
}
