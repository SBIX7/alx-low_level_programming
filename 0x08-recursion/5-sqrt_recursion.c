#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
int i;
if (n < 0)
	return (-1);
if (n == 1)
	return (1);
for (i = 2; i < n / 2; i++)
{
	if (i * i == n)
		return (n);
}
return (-1);
}
