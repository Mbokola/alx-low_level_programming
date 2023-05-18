#include "lists.h"
/**
 *sum_dlistint - gets sum of member n
 *@head: pointer to list
 *
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;
	/* check if list is empty */
	if (!head)
		return (sum);
	/* Loop and extract value of n adding to sum */
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
