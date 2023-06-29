#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first letter of the string */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		/* Capitalize the first letter of each word */
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		     str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		     str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		     str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		     str[i - 1] == '}') &&
		    (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
	}

	return str;
}

