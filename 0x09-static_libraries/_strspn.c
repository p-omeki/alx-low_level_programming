#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The number of characters in the initial segment of s that consists
 *         only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (found == 0)
			break;

		s++;
		accept = accept - count;
	}

	return count;
}

