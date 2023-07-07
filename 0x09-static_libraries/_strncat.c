#include "main.h"

/**
 * _strncat - concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return dest;
}

