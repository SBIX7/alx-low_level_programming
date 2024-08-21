#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that add node at the end of the list.
 * @head: adress to the head of the list.
 * @n: number that we need to add.
 *
 * Return: the adress of the new list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);
	if (*head == NULL)
	{
		newnode->n = n;
		*head = newnode;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newnode->n = n;
	newnode->next = NULL;
	temp->next = newnode;
	return (*head);
}
