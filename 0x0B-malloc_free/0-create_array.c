#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: size of the list.
 * @c: the char.
 * Return: return a pointer to the list created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
