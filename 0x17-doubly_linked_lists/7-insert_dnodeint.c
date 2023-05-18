#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node @idx
 *@h: pointer to list
 *@idx: position to insert
 *@n: data value
 *
 *Return: new_list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	int index = (int)idx;
	/* Error check malloc */
	if (!new_node || !*h)
		return (NULL);
	/* Create the new_node and initialize  */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/* if index - 1 < 0 add begining */
	index -= 1;
	if (index < 0)
	{
		add_dnodeint(&(*h), n);
		return (*h);
	}
	/* Traverse list to index - 1 */
	while (index)
	{
		current = current->next;
		index--;
		if (!current)
			return (NULL);
	}

	/* Set new_node->next to current->next */
	new_node->next = current->next;
	/* set new_node->prev to current */
	new_node->prev = current;
	/* set current->next to new_node */
	current->next = new_node;
	/* Move current to new_node->next */
	current = new_node->next;
	/* set current->prev to new_node */
	if (current)
		current->prev = new_node;
	/* Return Modified list */
	return (*h);
}
