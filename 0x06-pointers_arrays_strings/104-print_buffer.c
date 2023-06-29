#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 *
 * Description: Prints the content of the buffer in a specific format.
 * Each line shows the position, hexadecimal content, and ASCII representation.
 * If the size is 0 or less, it prints a new line.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		/* Print hex content */
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");

			if (j + 1 < size)
				printf("%02x ", (unsigned char)b[j + 1]);
			else
				printf("   ");
		}

		printf(" ");

		/* Print ASCII content */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
					printf("%c", b[j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}

