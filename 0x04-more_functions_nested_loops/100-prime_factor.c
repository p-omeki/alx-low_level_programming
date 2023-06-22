#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 */
void largest_prime_factor(long int n)
{
	long int factor = 2;

	while (factor <= sqrt(n))
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", n);
}

int main(void)
{
	long int number = 612852475143;
	largest_prime_factor(number);
	return 0;
}

