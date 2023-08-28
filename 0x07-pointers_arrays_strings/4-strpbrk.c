#include <string.h>
#include "main.h"

/**
 * _strpbrk - Finds the first occurrence of one character from a string in the source string.
 * @s: The source string.
 * @accept: The string containing the characters to search.
 *
 * Return: A pointer to the byte found, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
