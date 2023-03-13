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

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			grid[i][j] = 0;

	return (grid);
}
