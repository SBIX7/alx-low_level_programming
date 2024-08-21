#include "lists.h"

/**
 * get_nodeint_at_index - function that search for nth node.
 * @head: pointer that point to the adress to head list.
 * @index: the index.
 *
 * Return: adress that point to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i <= index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
