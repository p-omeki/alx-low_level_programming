#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}

