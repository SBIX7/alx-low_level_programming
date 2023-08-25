#include <ctype.h>
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @n: Input string.
 *
 * Return: Uppercase string.
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
	n[i] = toupper(n[i]);
	i++;
}
return (n);
}
