#include "main.h"

/**
 * _print_rev_recursion - Function that return a string in reverse.
 * @s: The string.
 *
 * Return: The string s reversed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(char *s);
		_putchar (*s);
	}
}
