#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: Linked list
  *
  * Return: Number of elements of a list
  */
size_t list_len(const list_t *h)
{
	const list_t *current;
	int i;

	current = h;
	for (i = 0; current; i++)
	{
		current = current->next;
	}
	return (i);
}
