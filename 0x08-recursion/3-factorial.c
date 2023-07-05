#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if the input is invalid.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Error: Invalid input */
	else if (n == 0)
		return (1); /* Base case: factorial of 0 is 1 */
	else
		return (n * factorial(n - 1)); /* Recursive call */
}

