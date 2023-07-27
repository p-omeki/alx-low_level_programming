#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *str_copy;
    size_t str_len = 0;

    /* Compute the length of the string */
    while (str[str_len])
        str_len++;

    /* Duplicate the string using strdup */
    str_copy = strdup(str);
    if (str_copy == NULL)
        return (NULL);

    /* Create a new node and fill its fields */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(str_copy);
        return (NULL);
    }

    new_node->str = str_copy;
    new_node->len = str_len;
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return (new_node);
}

