#include <string.h>
#include "main.h"

/**
 * _strstr - Function that point to the first occurence of a str in the src.
 * @haystack: The string.
 * @needle: substring.
 *
 * Return: the first occurence of needle in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
