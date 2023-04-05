#include "lists.h"

/**
 *reverse_listint - reverses a list
 *@head: pointer to list
 *
 *Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *save_link = *head, *tmp = *head;

	if (!*head)
		return (NULL);
	if (!((*head)->next))
	{
		return (*head);
	}
	else
	{
		save_link = tmp->next;
		tmp->next = NULL;
		while (save_link)
		{
			tmp = save_link;
			save_link = save_link->next;
			tmp->next = *head;
			*head = tmp;
		}
	}
	return (*head);
}
