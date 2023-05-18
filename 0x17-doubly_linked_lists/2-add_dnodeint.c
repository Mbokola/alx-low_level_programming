#include "lists.h"
/**
 *add_dnodeint - adds node at beginning of list
 *@head: pointer to list
 *@n: data value of node
 *
 *Return: New list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create new_node */
	dlistint_t *current, *new_node = malloc(sizeof(dlistint_t));
	/* Error check malloc */
	if (!new_node)
	{
		dprintf(2, "Error allocating memory");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	/* set new_node, prev node to null */
	new_node->prev = NULL;
	/* check if list is empty */
	if (!*head)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	/* Check we are at beginning of list */
	current = *head;
	while (current->prev)
		current = current->prev;
	/* set new_node, next node to head */
	new_node->next = current;
	/* set head node, prev node to new_node */
	current->prev = new_node;
	/* Make new_node the head node */
	current = new_node;
	*head = current;
	/* Return list */
	return (*head);
}
