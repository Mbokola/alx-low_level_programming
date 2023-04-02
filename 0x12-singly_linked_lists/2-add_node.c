#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = *head;
	if (head && str)
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = current;
		current = *head;
		return (current);
	}
	return (0);
}
