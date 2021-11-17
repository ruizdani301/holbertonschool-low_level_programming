#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node at index
* @head: pointer
* @index: Variable
* Return: data
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *pin;
	unsigned int x = 1;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = (*head);
	if (index == 0)
	{
		pin = tmp->next;
		(*head) = pin;
		free(tmp);
		return (1);
	}
	while (x < index && tmp != NULL)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		x++;
	}
	pin = tmp;
	pin = pin->next;
	tmp->next = pin->next;
	free(pin);
	return (1);
}
