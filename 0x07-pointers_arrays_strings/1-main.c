#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			_putchar(' ');
		}
		if (!(i % 10) && i)
		{
			_putchar('\n');
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char src[10] = "Hello";
	char dest[10] = "";
	unsigned int n = 5;

	printf("Before memcpy:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	_memcpy(dest, src, n);

	printf("After memcpy:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}

