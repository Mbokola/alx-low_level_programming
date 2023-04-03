#include "lists.h"

/**
 *insert_nodeint_at_index - insert new node @idx
 *@head: pointer to list
 *@idx: index to insert node
 *@n: data for first member of new node
 *
 *Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *new_node, *tmp;

	if (!(*head))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	tmp = *head;
	for (counter = 0; counter < idx; counter++)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
