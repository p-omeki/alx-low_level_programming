#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_integer(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * is_positive_integer - Checks if a string represents a positive integer
 * @s: The string to check
 *
 * Return: 1 if positive integer, 0 otherwise
 */
int is_positive_integer(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

