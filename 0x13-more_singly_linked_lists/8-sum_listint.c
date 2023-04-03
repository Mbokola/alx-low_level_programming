#include "lists.h"
/**
 *sum_listint - sums up data of all nodes
 *@head: pointer to node
 *
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	for (; current; current = current->next)
		sum += current->n;
	return (sum);
}
