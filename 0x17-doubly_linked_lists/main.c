#include "lists.h"
/**
 *print_dlistint - prints elements in a list
 *@h: pointer to list
 *
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

        size_t count = 0; /* Keeps count of visited nodes */
        const dlistint_t *current; /* Pointer to traverse with */

        current = h;
        if (!current) /* Check if list is empty */
                return (0);
        while (current->prev) /* Check we are at beginning of list */
                current = current->prev;
        while (current)
        {
                count += 1;
                printf("%d\n", current->n);
                if (!current->next)
                        break;
                current = current->next;
        }
        return (count);
}

int main(void)
{
	dlistint_t *head, *ptr;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 8, 4096);
    print_dlistint(head);
    ptr = head;
    while (ptr->next)
	    ptr = ptr->next;
    printf("-----------------\n");
    while (ptr->prev)
    {
	    printf("%d\n", ptr->n);
	    ptr = ptr->prev;
    }
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
