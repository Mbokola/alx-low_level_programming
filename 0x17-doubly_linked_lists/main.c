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

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
