#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node at index @index of
 *a dlistint_t linked list.
 *@head: doubly linked list
 *@index: index of the node that should be deleted. Index starts at 0.
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	/* Return -1 if list is empty */
	if (!*head)
		return (-1);
	/* free head node */
	if (!current->prev && !index)
	{
		*head = (*head)->next;
		/* Check if head is NULL */
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/* Traverse current ptr index times */
	for (; index; index--)
	{
		current = current->next;
		/*
		 * Return -1 if index is out of range i.e when current is set
		 * to NULL after reaching end of the list
		 */
		if (!current)
			return (-1);
	}
	/*
	 * Set next pointer of node before/next current node to node after/prev
	 * current node
	 */
	current->prev->next = current->next;
	/*
	 * Set prev node of node after/next current node to
	 * node before/prev current node
	 */
	current->next->prev = current->prev;
	/* Free current node */
	free(current);
	/* Return 1 */
	return (1);
}
