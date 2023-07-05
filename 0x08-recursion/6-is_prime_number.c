#include "main.h"

int is_prime_helper(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;  /* Not a prime number */

	return is_prime_helper(n, 2);
}

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return 1;  /* Found a prime number */
	if (n % divisor == 0)
		return 0;  /* Not a prime number */
	return is_prime_helper(n, divisor + 1);
}

