#include <string.h>
#include "main.h"

/**
 * _strspn - Function that retutn the numbre of accebtable cahr in a string.
 * @s: The string.
 * @accept: The acceptable characters.
 *
 * Return: The number of characters from @accept in s.
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
