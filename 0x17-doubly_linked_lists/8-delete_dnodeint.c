#include "lists.h"
/**
 * delete_dnodeint_at_index - delecte node in position of index
 * @head: likend list
 * @index: position of node
 * Return: delecte node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	if (tmp == *head)
		*head = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
