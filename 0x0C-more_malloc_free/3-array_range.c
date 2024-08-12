#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that return an pointer to an array
 * @min: min int.
 * @max: max int.
 *
 * Return: sorted array of integers.
 */
int *array_range(int min, int max)
{
	int *p, i, j = 0;

	if (max < min)
	return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
