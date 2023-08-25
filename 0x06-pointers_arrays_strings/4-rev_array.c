#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: INT a.
 * @n: Size of table.
 *
 * Return: Reversed table.
 */
void reverse_array(int *a, int n)
{
int i;
int b;
for (i = 0 ;(i < n / 2) ;i++)
{
	j = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = a[i];
}
}
