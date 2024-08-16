#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - function that print all.
 * @format: format.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list po;
	unsigned int j = 0, len;
	char *cpform, *sep = "";

	va_start(po, format);
	len = strlen(format);
	if (format)
	while (j < len)
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", sep, va_arg(po, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(po, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(po, double));
				break;
			case 's':
				cpform = va_arg(po, char *);
				if (cpform == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", sep, cpform);
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j++;
	}
	va_end(po);
	printf("\n");
}
