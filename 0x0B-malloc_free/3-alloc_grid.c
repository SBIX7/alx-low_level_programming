#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 *
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **arr, i, j;
if (width <= 0 || height <= 0)
	return (NULL);
arr = (int **)malloc(sizeof(int) * width);
arr = malloc(sizeof(int) * height);
for (i = 0; i < width; i++)
{
	for (j = 0; j < height; j++)
	{
		arr[i][j] = 0;
	}
}
return (arr);
}
