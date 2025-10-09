#include "lists.h"
#include <string.h>

/**
 * _strlen - funvtion that count the lenght of a string
 * @s: string
 * Return: lenght of s
 */

int _strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

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
	newhead->len = _strlen(str);
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
