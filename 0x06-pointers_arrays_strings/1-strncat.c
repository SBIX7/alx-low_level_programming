#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: First String.
 * @src: Source string.
 * @n: Bytes.
 *
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
