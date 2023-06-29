#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*ptr != '\0')
		ptr++;

	/* Concatenate the source string to the destination string */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add a terminating null byte at the end */
	*ptr = '\0';

	return dest;
}

