#include "lists.h"
/**
 * *add_dnodeint -  returns the number of elements
 * @head: pointer
 * @n: data
 * Return:(pointer)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = (*head);
		(*head)->prev = new;
		(*head) = new;
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		(*head) = new;
	}
	return (*head);
}
