#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers separedate with an char given.
 * @separator: char.
 * @n: number of arguments passed to the function.
 *
 * Rteurn: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list po;
	unsigned int i;

	va_start(po, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(po, int));
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(po);
	printf("\n");
}
