#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that create an array.
 * @size: the size.
 * @c: The char.
 *
 * Return: an array.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
	return (NULL);
a = malloc (sizeof(unsigned int));
for (i = 0; i < size; i++)
{
	a[i] = c;
}
return (a);
}
