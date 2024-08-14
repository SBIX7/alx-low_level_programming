#include "function_pointers.h"

/**
 * print_name - function that print name.
 * @name: name.
 * @f: pointer to a function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
	{
		print_name_as_is(name);
		return;
	}
	if (f == print_name_uppercase)
	{
		print_name_uppercase(name);
		return;
	}
}
