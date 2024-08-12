#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that simulate realloc
 * @ptr: the adress to the old allocation.
 * @old_size: old size.
 * @new_size: new size.
 *
 * Return: new adress to new allocation.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i, j = 0;
	int *atr1, *btr2 = (int *)ptr;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	atr1 = (int *)p;
	for (i = 0; i < old_size; i++)
	{
		atr1[j] = btr2[i];
		j++;
	}
	free(ptr);
	return (p);
}
