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
	unsigned int j = 0, len = strlen(format), test = 1;
	char *cpform;

	va_start(po, format);
	while (j < len)
	{
		if (test == 0)
		{
			printf(", ");
		}
		test = 0;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(po, int));
				break;
			case 'i':
				printf("%d", va_arg(po, int));
				break;
			case 'f':
				printf("%f", va_arg(po, double));
				break;
			case 's':
				cpform = va_arg(po, char *);
				if (cpform == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", cpform);
				break;
			default:
				test = 1;
		}
		j++;
	}
	va_end(po);
	printf("\n");
}
