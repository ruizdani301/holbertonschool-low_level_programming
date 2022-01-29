#include "lists.h"
/**
 * *insert_dnodeint_at_index - pointer
 * @h: pointer
 * @idx: pointer
 * @n: pointer
 * Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr2 = *h;
	dlistint_t *ptr;
	unsigned int i = 0;

	if (idx == 0 || !*h)
	{
		return (add_dnodeint(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while ((ptr2) != NULL && i < idx)
	{
		ptr = (ptr2);
		(ptr2) = (ptr2)->next;
		i++;
	}
	if ((ptr2) == NULL && idx == i)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	else if ((ptr2) == NULL && idx >= (i + 1))
	{
		return (NULL);
	}
	else
	{
		ptr->next = new;
		(ptr2)->prev = new;
		new->prev = ptr;
		new->next = (ptr2);
		return (new);
	}
}
