#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * string_nconcat: function that return two concat string.
 * @s1: first string.
 * @s2: second string.
 * @n: number of chars from s2.
 *
 * Return: an adress to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(strlen(s1) + strlen(s2) + 2);
	if (strlen(s2) < n)
	n = strlen(s2);
	if (p == NULL)
	return (NULL);
	p[0] = '\0';
	strcat(p, s1);
	strncat(p, s2, n);
	return (p);
}
