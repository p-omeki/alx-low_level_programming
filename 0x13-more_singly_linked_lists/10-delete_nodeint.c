#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int count = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    current = *head;

    while (current != NULL && count < index - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);
    return (1);
}

