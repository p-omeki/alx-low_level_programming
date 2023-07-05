#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1; /* Error: Invalid input */
	else if (y == 0)
		return 1; /* Base case: any number raised to the power of 0 is 1 */
	else
		return x * _pow_recursion(x, y - 1); /* Recursive call */
}

