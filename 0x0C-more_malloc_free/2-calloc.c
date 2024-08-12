#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory for an array and initialize it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
