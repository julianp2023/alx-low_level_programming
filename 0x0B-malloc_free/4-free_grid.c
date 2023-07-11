#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid
 *              previously created by the `alloc_grid` function.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

