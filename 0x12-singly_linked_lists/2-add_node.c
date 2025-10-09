#include "lists.h"
#include <string.h>
/**
 * add_node - function that add a new node.
 * @head: the adress of the head of the list.
 * @str: the new content that should be stored in the new head.
 * Return: the adress of the new head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);
	newhead->str = strdup(str);
	newhead->len = strlen(str);
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
