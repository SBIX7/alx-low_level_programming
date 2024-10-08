#include "lists.h"

/**
 * sum_listint - function that calculate the sum of data.
 * @head: adress that point to the head of list.
 *
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
