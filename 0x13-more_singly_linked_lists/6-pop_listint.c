#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that delete the head of a list.
 * @head: a poniter that point to the adress of the list.
 *
 * Return: the data of the deleted head.
 */

int pop_listint(listint_t **head)
{
	listint_t *oldhead;
	int n;

	if (head == NULL || *head == NULL)
	return (0);
	n = (*head)->n;
	oldhead = *head;
	*head = (*head)->next;
	free(oldhead);
	return (n);
}
