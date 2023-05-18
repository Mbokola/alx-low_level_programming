#include "lists.h"
/**
 *free_dlistint - Frees allocated memory
 *@head: pointer to list
 *
 *Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *save_link;
	/* Check if list is empty */
	if (head)
	{
	/* Save_link to next node */
		save_link = head->next;
	/* Free head node */
		free(head);
	/* Set head node to save_link, this marks begginging of loop*/
		while (save_link->next)
		{
			head = save_link;
			save_link = save_link->next;
			free(head);
		}
		free(save_link);
	}
}
