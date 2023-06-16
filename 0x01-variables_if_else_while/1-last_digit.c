#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);

    lastDigit = abs(n % 10);

    if (lastDigit > 5)
        printf("%d and is greater than 5\n", lastDigit);
    else if (lastDigit == 0)
        printf("%d and is 0\n", lastDigit);
    else
        printf("%d and is less than 6 and not 0\n", lastDigit);

    return 0;
}

