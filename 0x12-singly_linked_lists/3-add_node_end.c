#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that add node at the end of a list.
 * @head: adress to first node.
 * @str: string.
 *
 * Return: adress to the new list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *prevlist;

	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
	return (NULL);
	if (*head == NULL)
	{
		newlist->str = strdup(str);
		newlist->len = strlen(str);
		*head = newlist;
	}
	else
	{
		prevlist = *head;
		while (prevlist->next != NULL)
		{
			prevlist = prevlist->next;
		}
		newlist->str = strdup(str);
		newlist->len = strlen(str);
		prevlist->next = newlist;
	}
	return (newlist);

}
