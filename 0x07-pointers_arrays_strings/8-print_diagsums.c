#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0; /* Sum of main diagonal */
	int sum2 = 0; /* Sum of secondary diagonal */

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}

