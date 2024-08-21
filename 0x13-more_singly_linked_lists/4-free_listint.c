#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that free the memory allocated for the list.
 * @head: adress to the head of the list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *nextnode;

	if (head == NULL)
	return;
	while (head != NULL)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
