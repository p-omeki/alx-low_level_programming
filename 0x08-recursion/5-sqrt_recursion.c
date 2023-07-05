#include "main.h"

int calculate_sqrt(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;  /* Error: Invalid input */
	else
		return calculate_sqrt(n, 0);
}

int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return guess;  /* Base case: found the square root */
	else if (guess * guess > n)
		return -1;     /* Error: n does not have a natural square root */
	else
		return calculate_sqrt(n, guess + 1);  /* Recursive call with incremented guess */
}

