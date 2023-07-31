#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Integer value to be added in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Assign the integer value to the new node */
    new_node->n = n;

    /* Point the new node to the current head */
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return (new_node);
}

