#include "lists.h"

/**
 *listint_len - gets the number of nodes in a list
 *@h: pointer to a node
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t count;

	current = h;
	if (!h)
		return (0);
	for (count = 0; current; count++)
	{
		current = current->next;
	}
	return (count);
}
