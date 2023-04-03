#include "lists.h"
/**
 *add_nodeint - adds a node at begining of list
 *@head: pointer to a node
 *@n: new node first member value
 *
 *Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!(*head))
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
