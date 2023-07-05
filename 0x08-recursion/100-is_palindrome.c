#include "main.h"

int is_palindrome_helper(char *s, int start, int end);

int is_palindrome(char *s)
{
	int end = 0;  /* Declare end variable at the top of the function */

	if (*s == '\0')
		return 1;  /* Empty string is a palindrome */

	while (s[end] != '\0')
		end++;

	return is_palindrome_helper(s, 0, end - 1);
}

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;  /* Palindrome condition met */

	if (s[start] != s[end])
		return 0;  /* Not a palindrome */

	return is_palindrome_helper(s, start + 1, end - 1);
}

