#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: pointer to a list
 *
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *set_free;

	for (; *head; free(set_free))
	{
		set_free = *head;
		*head = (*head)->next;
	}
}
