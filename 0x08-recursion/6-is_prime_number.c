#include "main.h"

/**
 * is_prime_helper - Checks if a number is prime using recursion.
 * @n: The number to check.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);  /* Not a prime number */

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Checks if a number is prime using recursion.
 * @n: The number to check.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);  /* Found a prime number */
	if (n % divisor == 0)
		return (0);  /* Not a prime number */
	return (is_prime_helper(n, divisor + 1));
}

