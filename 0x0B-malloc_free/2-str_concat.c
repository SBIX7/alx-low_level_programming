#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concat two strings.
 * @s1: string.
 * @s2: string.
 *
 * Return: two strings concats.
 */
char *str_concat(char *s1, char *s2)
{
char *arr;
if (s1 == NULL && s2 == NULL)
	return (NULL);
arr = malloc(strlen(s1) + strlen(s2) + 1);
if (arr == NULL)
	return (NULL);
strcpy(arr, s1 ? s1 : "");
strcat(arr, s2 ? s2 : "");
return (arr);
}
