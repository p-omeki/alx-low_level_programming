#include <stdio.h>
#include <math.h>
#include "main.h"

unsigned long largest_prime_factor(unsigned long n);

int main(void)
{
    unsigned long number = 612852475143;
    unsigned long largest_factor;

    largest_factor = largest_prime_factor(number);

    printf("%lu\n", largest_factor);

    return 0;
}

unsigned long largest_prime_factor(unsigned long n)
{
    unsigned long i, max_factor;

    max_factor = -1;

    /* Remove all the 2s as factors */
    while (n % 2 == 0)
    {
        max_factor = 2;
        n /= 2;
    }

    /* n must be odd at this point, so a skip of 2 (i.e., i += 2) can be used */
    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            max_factor = i;
            n /= i;
        }
    }

    /* If n is a prime number greater than 2 */
    if (n > 2)
        max_factor = n;

    return max_factor;
}

