#include "main.h"

/**
 * free_grid - frees a 2-d grid previously created by 
 * alloc_grid function
 *
 * @grid: the 2-d grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
