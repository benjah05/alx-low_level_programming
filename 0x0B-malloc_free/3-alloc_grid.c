#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create 2-D grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: 2-D grid of integers
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
