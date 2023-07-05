#include "main.h"

int wildcmp(char *s1, char *s2);

int wildcmp(char *s1, char *s2)
{
	/* Base case: if both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return 1;

	/* If the current characters match or s2 contains a '*', move to the next characters */
	if (*s1 == *s2 || *s2 == '*')
		return wildcmp(s1 + 1, s2 + 1);

	/* If s2 contains a '*', check for matching possibilities by advancing in s2 */
	if (*s2 == '*')
	{
		/* Keep advancing in s2 until a non-* character is found */
		while (*(s2 + 1) == '*')
			s2++;

		/* If s2 is now at the end, s1 can be any remaining characters, so they are considered identical */
		if (*(s2 + 1) == '\0')
			return 1;

		/* Try matching s1 with s2+1, or s1+1 with s2 if the match fails */
		return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
	}

	/* If none of the above conditions are met, the strings are not identical */
	return 0;
}

