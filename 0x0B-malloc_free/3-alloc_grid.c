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
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
	return (NULL);
for (i = 0; i < width; i++)
{
	arr[i] = malloc(sizeof(int) * width);
	if (arr[i] == NULL)
        {
	for (j = 0; j < i; j++)
		{
			free(arr[j]);
		}
		free(arr);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}
}
return (arr);
}
