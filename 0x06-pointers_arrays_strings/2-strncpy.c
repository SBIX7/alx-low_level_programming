#include <string.h>
#include "main.h"

/**
 * _strncpy - Copying function.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
