#include <ctype.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * 
 * Return: Uppercase.
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
	n[i] = toupper(n[i]);
	i++;
}
}
