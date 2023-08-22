#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * return: string in the stdout
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	_putchar(i);
	i++;
}
_putchar('\n');
}
