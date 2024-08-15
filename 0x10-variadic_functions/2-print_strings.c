#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that print strings given as arguments.
 * @separator: separator char.
 * @n: number of arguments passed to func.
 *
 * Return: void;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list po;
	unsigned int i;
	char *arg;

	va_start(po, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(po, char *);
		if (arg == NULL)
		printf("(nil)");
		else
		printf("%s", arg);
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(po);
	printf("\n");
}
