#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees two dimensional grid
 * @grid: pointer tothe grid.
 * @height: height.
 * Return: frees a two dim grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
