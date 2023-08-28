#include <string.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the block of memory to be filled.
 * @b: The value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
