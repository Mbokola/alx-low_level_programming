#include "lists.h"
/**
  * print_list - Prints all elements of a list
  * @h: linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *current;

	current = h;

	for (i = 0; current; i++)
	{
		if (!(current->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
	}

	return (i);
}
