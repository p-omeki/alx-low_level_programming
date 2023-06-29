#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13_chars[j];
				break;
			}
		}
	}

	return str;
}

