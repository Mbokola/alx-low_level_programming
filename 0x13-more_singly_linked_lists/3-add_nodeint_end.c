#include "lists.h"

/**
 *add_nodeint_end - adds a node at end of list
 *@head: pointer to node
 *@n: listint_t first member value
 *
 *Return: pointer to new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = *head;
	tmp = *head;
	*head = malloc(sizeof(listint_t));
	if (!(*head))
		return (NULL);
	(*head)->n = n;
	(*head)->next = NULL;
	if (new_node)
	{
		for (; new_node->next; new_node = new_node->next)
			;
		new_node->next = *head;
		*head = tmp;
		new_node = new_node->next;
	}
	return (new_node);
}
