#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that return a matrix initialized with zero
 * @width: positive integer.
 * @height: positive integer.
 * Return: pointer to matrix.
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;
	
	if (width <= 0 || height <= 0)
	return (NULL);
	p = malloc(width);
	*p= malloc(height);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
