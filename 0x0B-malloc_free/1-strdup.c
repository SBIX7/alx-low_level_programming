#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string.
 *
 * Return: The sttring duplicated.
 */
char *_strdup(char *str)
{
char *arr;
if (str == NULL)
	return (NULL);
arr = malloc(strlen(str) + 1);
return (strcpy(arr,str));
}
