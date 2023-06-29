#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	/* Copy characters from source to destination up to n bytes or until null byte */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill remaining bytes in destination with null bytes if n > length of source */
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}

