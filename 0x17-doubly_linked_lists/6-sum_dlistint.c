#include "lists.h"
/**
 * sum_dlistint - suma
 * @head: pointer
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	unsigned int x = 0;

	tmp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		x = x + (tmp->n);
		tmp = tmp->next;
	}
	return (x);
	}

