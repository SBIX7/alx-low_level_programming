#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings with a limit on the second string.
 * @s1: The first string. If NULL, it is treated as an empty string.
 * @s2: The second string. If NULL, it is treated as an empty string.
 * @n: Number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory containing
 * the concatenated string. NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) < n)
	n = strlen(s2);
	p = malloc(strlen(s1) + n + 1);
	if (p == NULL)
	return (NULL);
	p[0] = '\0';
	strcat(p, s1);
	strncat(p, s2, n);
	return (p);
}
