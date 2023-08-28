#include <string.h>
#include "main.h"

/**
 * _strpbrk - Fuction that return the first occurence of one char from a string in the src string.
 * @s: The source.
 * @accept: The string that contain the characters that we search.
 *
 * Return: The byte founded.
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
