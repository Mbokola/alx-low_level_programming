#include "lists.h"

/**
 *get_nodeint_at_index - gets node at position @index
 *@head: pointer to list
 *@index: node index
 *
 *Return: Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *fetch;
	unsigned int counter;

	if (!head)
		return (NULL);
	fetch = head;
	for (counter = 0; counter < index; counter++)
	{
		if (fetch)
			fetch = fetch->next;
		else
			return (NULL);
	}
	return (fetch);
}
