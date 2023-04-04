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
		while ((*head)->next)
		{
			while (tmp->next->next)
			{
				tmp = tmp->next;
				if (save_link->next == tmp)
					save_link = save_link->next;
			}
			tmp->next->next = tmp;
			if (save_link == tmp)
				save_link = save_link->next;
			tmp->next = NULL;
			tmp = *head;
		}
		*head = save_link;
	}
	return (*head);
}
