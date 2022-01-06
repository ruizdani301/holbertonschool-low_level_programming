#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end
 * @head: double pointer to the dlistint_t
 * @n:in the new node
 * Return: address of the new nodo, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->n = n;
		tmp->next = new;
		new->prev = tmp;
		new->next = NULL;
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
