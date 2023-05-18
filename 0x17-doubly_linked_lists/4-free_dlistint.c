#include "lists.h"
/**
 *free_dlistint - Frees allocated memory
 *@head: pointer to list
 *
 *Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *save_link;

	while (head)
	{
		save_link = head->next;
		free(head);
		head = save_link;
	}
}
