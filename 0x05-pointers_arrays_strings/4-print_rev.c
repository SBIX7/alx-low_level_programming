#include "main.h"
#include <string.h>
/**
 * print_rev - function that reverse a string
 * @s: string to reverse
 * return: the string reversed
 */
void print_rev(char *s)
{
int i = strlen(s) - 1;
while (i >= 0)
{
	_putchar(s[i]);
	i--;
}
_putchar('\n');
}
