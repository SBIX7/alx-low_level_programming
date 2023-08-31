#include "main.h"

/**
 * _puts_recursion - Function that print a string.
 * @s: The string that we want to print.
 *
 * Return: Print s.
 */
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
	_putchar ('\n');
	return;
}
_putchar (s[i]);
_puts_recursion(s + 1);
}
