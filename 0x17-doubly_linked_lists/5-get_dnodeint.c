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

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
