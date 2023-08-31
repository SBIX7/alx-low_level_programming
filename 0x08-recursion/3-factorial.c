#include "main.h"

/**
 * factorial - Fuction that return a fctorial of a num.
 * @n: The number.
 *
 * Return: The factorial of the num n.
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
