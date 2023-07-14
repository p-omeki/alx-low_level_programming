#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         If nmemb or size is 0, or if malloc fails, returns NULL
 *         The memory is set to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero */
	for (i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

