#include "main.h"
#include <stdlib.h>
/**
* free_grid -  function that frees a 2 dimensional grid previously
* @grid: the grid to create
* @height: the height of the grid
* return : nothing
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
