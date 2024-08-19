#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that add list at the beginin.
 * @head: NULL.
 * @str: string.
 *
 * Return: add list at beginin.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
	return (NULL);
	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = *head;
	*head = newlist;
	return (newlist);
}
