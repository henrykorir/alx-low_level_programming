#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - alocates and initializesw 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2d array or NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	*grid = (int *)malloc(width * height * sizeof(int));
	if (*grid == NULL)
	{
		free(*grid);
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		grid[i] = (*grid + (height * i));
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			grid[i][j] = 0;

	return (grid);
}
