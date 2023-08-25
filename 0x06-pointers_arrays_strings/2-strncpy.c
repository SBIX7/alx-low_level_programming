#include <string.h>
#include "main.h"

/**
 * _strncpy - Copying function.
 * @dest: Dest str.
 * @src: Src str.
 * @n: Num of src.
 *
 * Return: Dest str and n str.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest,src,n));
}
