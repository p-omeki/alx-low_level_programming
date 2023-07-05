#include <stdio.h>
#include "main.h"

int main(void)
{
    char *s1 = "hello";
    char *s2 = "h*llo";

    int result = wildcmp(s1, s2);

    printf("Result: %d\n", result);

    return 0;
}

/**
 * wildcmp - Compares two strings with wildcard pattern matching.
 * @s1: The first string.
 * @s2: The second string with wildcard pattern.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return 1; /* Base case: both strings are empty */

    if (*s1 == *s2 || *s2 == '*')
        return wildcmp(s1 + 1, s2 + 1); /* Characters match or s2 contains '*' */

    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return wildcmp(s1, s2 + 1); /* Skip consecutive '*' characters */

        if (*(s2 + 1) == '\0')
            return 1; /* s2 is at the end, s1 can be any remaining characters */

        if (*s1 != '\0')
            return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2); /* s1 with s2+1 */
    }

    return 0; /* No match found */
}

