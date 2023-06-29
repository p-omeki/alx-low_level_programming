#include "main.h"
#include <string.h>

/**
 * reverse_string - Reverses a string
 * @str: Pointer to the string
 */
void reverse_string(char *str)
{
	int i, j;
	char temp;

	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * infinite_add - Adds two numbers
 * @n1: Pointer to the first number
 * @n2: Pointer to the second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, sum, carry = 0;

	/* Calculate the lengths of n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if the result can be stored in r */
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	/* Add digits from right to left */
	for (i = 0; i < size_r - 1; i++)
	{
		if (len1 > 0)
		{
			sum = (n1[len1 - 1] - '0') + carry;
			len1--;
		}
		else
		{
			sum = carry;
		}

		if (len2 > 0)
		{
			sum += (n2[len2 - 1] - '0');
			len2--;
		}

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}

	/* Check if there is still a carry */
	if (carry)
	{
		if (i == size_r - 1) /* Check if there is enough space for the carry */
			return (0);

		r[i] = carry + '0';
		i++;
	}

	r[i] = '\0';

	/* Reverse the result */
	reverse_string(r);

	return (r);
}

