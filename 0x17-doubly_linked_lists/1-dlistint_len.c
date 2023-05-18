#include "lists.h"
/**
 *dlistint_len - prints elements in a list
 *@h: pointer to list
 *
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t count = 0; /* Keeps count of visited nodes */
	const dlistint_t *current; /* Pointer to traverse with */

	current = h;
	if (!current) /* Check if list is empty */
		return (0);
	while (current->prev) /* Check we are at beginning of list */
		current = current->prev;
	while (current)
	{
		count += 1;
		if (!current->next)
			break;
		current = current->next;
	}
	return (count);
}
