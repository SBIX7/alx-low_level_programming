#include "main.h"

/**
 * _puts_recursion - Function that print a string.
 * @s: The string that we want to print.
 *
 * Return: Print s.
 */
void _puts_recursion(char *s)
{
if (s == '\0')
{
	_putchar ('\n');
}
_putchar (s);
_puts_recursion(s + 1);
}
