#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to free.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the array of row pointers */
	free(grid);
}

