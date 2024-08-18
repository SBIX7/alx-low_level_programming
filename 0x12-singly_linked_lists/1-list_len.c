#include "lists.h"

/**
 * list_len - function that count the number of neouds
 * @h: adress pointer to struct.
 *
 * Return: numbber of linked lists.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current;

	if (h == NULL)
	return (0);
	current = h;
	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
