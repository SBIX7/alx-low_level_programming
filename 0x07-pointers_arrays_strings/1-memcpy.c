#include <string.h>
#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: The Destination.
 * @src: The Source.
 * @n: Number of bytes.
 *
 * Return: n src to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
