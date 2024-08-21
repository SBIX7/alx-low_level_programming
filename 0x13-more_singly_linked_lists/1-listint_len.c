#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that return the number of nodes.
 * @h: adress to the head of the list
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
