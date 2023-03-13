#include <stdlib.h>
#include "main.h"
/*
 * free_grid - free 2d dynamic memory
 * @grid: 2d dynamic memory
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
