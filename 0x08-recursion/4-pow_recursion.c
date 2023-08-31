#include "main.h"

/**
 * _pow_recursion - Fuction that return the x power y.
 * @x: The first integer.
 * @y: The second integer.
 *
 * Return: x power y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
