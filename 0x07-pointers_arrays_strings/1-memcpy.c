#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 *
 * Return: A pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return dest;
}

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, return the character written. On error, return -1.
 */
int _putchar(char c)
{
	return putchar(c);
}

