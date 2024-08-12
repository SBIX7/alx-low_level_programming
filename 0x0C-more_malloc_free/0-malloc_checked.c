#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked functio that return an adress to a pointer.
 * @b: number of integers.
 * Return: a pointer to the adress.
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b * sizeof(int));
	if (p ==  NULL)
	exit(98);
	return (p);
}
