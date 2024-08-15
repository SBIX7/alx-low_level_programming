#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function.
 * @n: number of argument passed to function.
 *
 * Return: sum of argument passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list po;
	unsigned int i, sum;

	if (n == 0)
	return (0);
	va_start(po, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(po, int);
	}
	va_end(po);
	return (sum);
}
