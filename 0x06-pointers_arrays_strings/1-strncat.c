#include <string.h>
#include <main.h>

/**
 * _strncat - Parado no bailo.
 * @dest: First String.
 * @src: Source string.
 * @n: Bytes.
 * Return: Bomba.
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest,src,n));
}
