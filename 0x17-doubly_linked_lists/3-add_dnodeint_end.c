#include "lists.h"
/**
 *add_dnodeint_end - adds node at end of list
 *@head: pointer to list
 *@n: data value of node
 *
 *Return: New list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* create new_node */
	dlistint_t *current, *new_node = malloc(sizeof(dlistint_t));
	/* Error check malloc */
	if (!new_node)
		return (NULL);
	new_node->n = n;
	/* set new_node, next node to null */
	new_node->next = NULL;
	/* check if list is empty */
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	/* Check we are at end of list */
	current = *head;
	while (current->next)
		current = current->next;
	/* set new_node, prev node to current */
	new_node->prev = current;
	/* set current node, next node to new_node */
	current->next = new_node;
	/* Return list */
	return (*head);
}
