#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string.
 * Return: pointer to the new allocated string.
 */

char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	return (NULL);
	p = malloc(strlen(str) + 1);
	if (p == NULL)
	return (NULL);
	strcpy(p, str);
	return (p);
}
