#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the characters to search for
 *
 * Return: The pointer to the first occurrence in the string s of any of the
 *         bytes in the string accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return s;
			accept++;
		}

		s++;
		accept = accept - _strlen(accept);
	}

	return NULL;
}

