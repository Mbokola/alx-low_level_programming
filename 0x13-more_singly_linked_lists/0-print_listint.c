#include "lists.h"

/**
 *print_listint - prints elemenits inside a node
 *@h: pointer to struct
 *
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *current;

	if (!h)
		return (0);
	current = h;
	for (count = 0; current; count++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

	return (count);
}
