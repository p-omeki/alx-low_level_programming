#include <unistd.h>
#include "main.h"

/**
 * _puts - writes a string to the standard output
 * @s: The string to be written
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}

