#include "lists.h"

/**
 *insert_nodeint_at_index - insert new node @idx
 *@head: pointer to list
 *@idx: index to insert node
 *@n: data for first member of new node
 *
 *Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *tmp, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == counter)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	for (counter = 0; tmp->next; counter++)
		tmp = tmp->next;
	counter += 1;
	if (idx == counter)
	{
		tmp->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx > counter)
		return (NULL);
	tmp = *head;
	for (counter = 0; counter < (idx - 1); counter++)
		tmp = tmp->next;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
