#include "main.h"
#include <string.h>
/**
 * print_rev - function that reverse a string
 * @s: string to reverse
 * return: the string reversed
 */
void print_rev(char *s)
{
int i = 0;
*s = strrev(s);
while (str[i] != '\0')
{
	putchar(str[i]);
	i++;
}
}
