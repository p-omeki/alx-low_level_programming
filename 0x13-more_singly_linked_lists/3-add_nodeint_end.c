#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Integer value to be added in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Assign the integer value to the new node */
    new_node->n = n;

    /* Set the next pointer of the new node to NULL as it will be the last node */
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head and return */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Find the last node in the list */
    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    /* Set the next pointer of the last node to the new node */
    temp->next = new_node;

    return (new_node);
}

