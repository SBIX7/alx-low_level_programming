#include "lists.h"

/**
 * reverse_listint - function that reverse a singly linked list.
 * @head: pointer that point to the adress of head list.
 *
 * Return: the adress of the new head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev = NULL;

	if (head == NULL || *head == NULL)
	return (NULL);
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
