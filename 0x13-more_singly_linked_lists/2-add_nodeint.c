#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that add node in the beginin.
 * @head: adress to the hed of the list.
 * @n: the number that we need to add.
 *
 * Return : pointer to the adress of the new list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
