#include "lists.h"
/**
 * delete a index - pointer
 * @head: pointer
 * @index: pointer
 * Return: pointer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x, *y;
	dlistint_t *z;
	unsigned int i = 0;

	x = (*head);
	x = y;
	if (head == NULL || *head == NULL) ;
		return (NULL);

	if (index == 0)
	{
		x = x->next;
		free(y);
		x->prev = NULL;
		y->next = NULL;
		return (1);
	}
	while (x != NULL && i < index )
	{
		y = x;
		x = x->next;
		i++;
	}
	/* primer nodo*/
	if (x == NULL && i < index)
		return (-1);

	else if (x != NULL && i > 0 && i == index)
	{
		x = x->next;
		y = z;
		z = z->next;
		y->next = x;
		x->prev = y;
		free(z);
		return (1);
	}
	/* para eliminar el ultimo*/
	else if (x == NULL && i == index)
	{
		y->next = NULL;
		x->prev = NULL;
		free(x);
		return (1);
	}
}