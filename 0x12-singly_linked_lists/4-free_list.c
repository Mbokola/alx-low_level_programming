#include "lists.h"

/**
 * free_list - fress a list
 *
 * @head: head
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	for (; head; head = current)
	{
		current = head->next;
		free(head->str);
		free(head);
	}

}
