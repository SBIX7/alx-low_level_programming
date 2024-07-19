#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenate two string
 * @s1: first string.
 * @s2: second string.
 * Return: string.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;

	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (p == NULL)
	return (NULL);
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	strcat(p, s1);
	strcat(p, s2);
	return (p);
}
