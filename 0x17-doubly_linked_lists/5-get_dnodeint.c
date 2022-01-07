#include "lists.h"
/**
 * *get_dnodeint_at_index - return node or null
 * @head: pointer
 * @index: int
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
		if (i == index)
		{
			return (tmp);
		}
	}
	return (NULL);
}
