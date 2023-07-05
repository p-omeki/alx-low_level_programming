#include "main.h"

/**
 * str_length - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_length(s + 1));
}

/**
 * is_palindrome_helper - Checks if a string is a palindrome using recursion.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* Palindrome condition met */

	if (s[start] != s[end])
		return (0); /* Not a palindrome */

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = str_length(s);
	return (is_palindrome_helper(s, 0, length - 1));
}

