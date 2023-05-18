#include "lists.h"
/**
 *get_dnodeint_at_index - retrieves a node at given index
 *@head: pointer to list
 *@index: index to extract node
 *
 *Return: Nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	/* check if list is empty */
	if (!head)
		return (NULL);
	/* Loop index times setting current pointer */
	while (index)
	{
		current = current->next;
		index--;
		if (!current)
			return (NULL);
	}
	return (current);
}
