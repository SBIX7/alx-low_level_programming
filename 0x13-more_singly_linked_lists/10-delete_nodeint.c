#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that delete a node at idx.
 * @head: pointer that point to the adress of the head list.
 * @index: the index.
 *
 * Return: 1 if succeeded -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
	return (-1);
	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);
	return (1);
}
