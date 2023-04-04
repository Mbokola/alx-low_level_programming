#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node @index
 *@head: pointer to list
 *@index: node of interest
 *
 *Return: 1 if succesful -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pop, *tmp;
	unsigned int counter;

	if (!*head)
		return (-1);
	pop = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(pop);
		return (1);
	}
	for (counter = 0; pop; counter++)
	{
		if (index - counter == 1)
			tmp = pop;
		if (counter < index)
			pop = pop->next;
		else
		{
			tmp->next = pop->next;
			free(pop);
			return (1);
		}
	}
	if (index > counter)
		return (-1);
	return (1);
}
