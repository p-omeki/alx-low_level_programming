#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*ptr != '\0')
		ptr++;

	/* Concatenate the source string to the destination string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add a terminating null byte at the end */
	*ptr = '\0';

	return dest;
}

