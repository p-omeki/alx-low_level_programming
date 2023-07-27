#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    /* Traverse the list and print each node */
    while (h != NULL)
    {
        /* Check if the string in the current node is NULL */
        if (h->str != NULL)
            printf("[%u] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        /* Move to the next node */
        h = h->next;
        /* Increment the node count */
        count++;
    }

    return count;
}

