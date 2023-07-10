#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_length = 0, arg_length = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			arg_length++;
			total_length++;
		}
		total_length++; /* Add space for '\n' */
	}

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	/* Copy the arguments and add '\n' */
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++, k++)
			str[k] = av[j][i];
		str[k] = '\n';
		k++;
	}

	str[k] = '\0'; /* Add the null-terminating character */

	return (str);
}

