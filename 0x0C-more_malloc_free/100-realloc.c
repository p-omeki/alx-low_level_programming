#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 *         If new_size is equal to zero and ptr is not NULL, returns NULL and frees ptr
 *         If malloc fails, returns NULL and frees ptr
 *         Otherwise, returns a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *c_ptr, *c_new_ptr;

	if (new_size == old_size)
		return ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return NULL;
		return new_ptr;
	}

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return NULL;
	}

	if (new_size < old_size)
		old_size = new_size;

	c_ptr = (char *)ptr;
	c_new_ptr = (char *)new_ptr;

	for (i = 0; i < old_size; i++)
		c_new_ptr[i] = c_ptr[i];

	free(ptr);

	return new_ptr;
}

