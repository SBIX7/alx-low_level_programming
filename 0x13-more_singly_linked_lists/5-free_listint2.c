#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that freea a list and sets head to NULL.
 * @head: a pointer to pointer that adress to head of the list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	if (head == NULL || *head == NULL)
	return;
	while (*head != NULL)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
	}
	*head = NULL;
}
