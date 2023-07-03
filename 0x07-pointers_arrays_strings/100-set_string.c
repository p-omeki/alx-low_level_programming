#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to a string.
 * @to: Pointer to the string to be assigned.
 *
 * Description: This function sets the value of a pointer to a char by assigning
 * the value of 'to' to the pointer 's'.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

