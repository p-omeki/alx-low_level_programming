#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count = 0;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        count++;

        printf("[%p] %d\n", (void *)current, current->n);

        /* Check if current pointer points to a node that was printed before */
        if (current <= current->next)
        {
            printf("-> [%p] %d\n", (void *)current->next, current->next->n);
            break;
        }
    }

    return (count);
}

