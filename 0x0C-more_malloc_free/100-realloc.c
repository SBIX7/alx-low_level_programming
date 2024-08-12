#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	old_size = new_size;
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
