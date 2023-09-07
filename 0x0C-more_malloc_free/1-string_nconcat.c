#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string.
 * @s2: second string.
 * @n:cn bytes.
 *
 * Return: concatenates two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arr;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
arr = (char *)malloc(strlen(s1) + 1 + n >= strlen(s2) ? strlen(s2) : n);
if (arr == NULL)
	return (NULL);
strcpy(arr, s1);
strncat(arr, s2, n >= strlen(s2) ? strlen(s2) : n);
return (arr);
}
