#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the alloc_grid grid
 * @grid: the alloc_grid
 * @height: height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
			return;
		free(grid[i]);
	}
	free(grid);
}
