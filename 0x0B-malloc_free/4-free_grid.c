#include "main.h"

/**
* free_grid - Frees a 2D grid previously created by alloc_grid
* @grid: Pointer to a 2D grid array
* @height: Height of the grid
* This function frees the memory allocated for a 2D grid of integers.
* It takes in a pointer to the grid array and the height of the grid,
* and iterates through each row of the grid to free the memory allocated
* for each row. Finally, it frees the memory allocated for the grid itself.
*/

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);

}
