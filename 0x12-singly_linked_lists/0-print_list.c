#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all linked lists.
 * @h: adress point to first kerf.
 *
 * Return: void.
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t n = 0;

	if (h == NULL)
	return (0);
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", current->len, current->str);
		n++;
		current = current->next;
	}
	return (n);
}
