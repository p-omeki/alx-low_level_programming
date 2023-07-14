#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, return the number of bytes written
 *         On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

