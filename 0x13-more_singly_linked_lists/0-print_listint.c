#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that print all the elements in the list.
 * @h: adress to head of the list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
