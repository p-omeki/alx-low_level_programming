#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current, *temp;

    if (h == NULL)
        return (0);

    current = *h;
    while (current != NULL)
    {
        size++;
        temp = current;
        current = current->next;
        free(temp);

        /* Check if the current node address is in the range of the next node */
        if (current >= temp)
        {
            *h = NULL; /* Set head to NULL to avoid accessing freed memory */
            return (size);
        }
    }

    *h = NULL; /* Set head to NULL after freeing the list */
    return (size);
}

