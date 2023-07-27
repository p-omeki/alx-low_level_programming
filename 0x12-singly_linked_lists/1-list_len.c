#include <stddef.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    /* Traverse the list and count each node */
    while (h != NULL)
    {
        h = h->next;
        count++;
    }

    return count;
}

