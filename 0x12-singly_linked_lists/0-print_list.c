#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that print all elements in a linked list
 * @h: variable type list_t
 * Return: print the lements stored in the list
 */

size_t print_list(const list_t *h)
{
	int size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
