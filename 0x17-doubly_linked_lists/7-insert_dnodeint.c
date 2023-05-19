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
	dlistint_t *new_node, *current = *h;
	/* Check if inserting at beggining */
	if (!idx)
	{
		add_dnodeint(&*h, n);
		return (*h);
	}
	/* Create nee_node */
	new_node = malloc(sizeof(dlistint_t));
	/* Error check malloc and initialize node*/
	if (!new_node)
		return (NULL);
	new_node->n = n;
	/*Check for empty list */
	if (!*h)
		return (new_node);
	/* Traverse to node idx - 1 */
	while (idx - 1)
	{
		current = current->next;
		idx--;
		if (!current)
			return (NULL);
	}
	/* Insert node */
	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	/* Return List */
	return (new_node);
}
