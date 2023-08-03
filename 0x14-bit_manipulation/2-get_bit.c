#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to retrieve the bit.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits = sizeof(unsigned long int) * 8;

	if (index >= max_bits)
		return (-1);

	return ((n >> index) & 1);
}

