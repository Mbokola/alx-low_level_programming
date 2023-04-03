#include "lists.h"

/**
 *pop_listint - deletes head node
 *@head: pointer to list
 *
 *Return: head nodes' first memmber n
 */
int pop_listint(listint_t **head)
{
	int store = 0;
	listint_t *set_free;

	set_free = *head;

	if (*head)
	{
		store = (*head)->n;
		*head = (*head)->next;
		free(set_free);
	}
	return (store);
}
