#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, len, i, j, k, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = 0;
	word_count = 0;
	while (str[len] != '\0')
	{
		while (str[len] == ' ')
			len++;
		if (str[len] != '\0' && str[len] != ' ')
		{
			word_count++;
			while (str[len] != ' ' && str[len] != '\0')
				len++;
		}
	}

	if (word_count == 0)
	{
		words = malloc(sizeof(char *) * 2);
		if (words == NULL)
			return (NULL);

		words[0] = malloc(sizeof(char));
		if (words[0] == NULL)
		{
			free(words);
			return (NULL);
		}

		words[0][0] = ' ';
		words[1] = NULL;

		return (words);
	}

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0' && k < word_count)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;
		words[k] = malloc(sizeof(char) * (word_len + 1));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_len; j++, i++)
			words[k][j] = str[i];
		words[k][j] = '\0';
		k++;
	}

	words[k] = NULL;

	return (words);
}

