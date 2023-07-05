#include "main.h"

/**
 * calculate_sqrt - Calculates the square root of a number using recursion.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n if found, -1 if n does not have a natural
 *         square root.
 */
int calculate_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n if found, -1 if n is negative or does not have
 *         a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Error: Invalid input */
	else
		return (calculate_sqrt(n, 0));
}

/**
 * calculate_sqrt - Calculates the square root of a number using recursion.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n if found, -1 if n does not have a natural
 *         square root.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess); /* Base case: found the square root */
	else if (guess * guess > n)
		return (-1); /* Error: n does not have a natural square root */
	else
        	return (calculate_sqrt(n, guess + 1)); 
}

