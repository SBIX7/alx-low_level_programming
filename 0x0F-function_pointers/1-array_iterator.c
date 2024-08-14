#include "function_pointers.h"

/**
 * array_iterator - apllie a function to an array.
 * @array: array.
 * @size: size.
 * @action: the function used.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
